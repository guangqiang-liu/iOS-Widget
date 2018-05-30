//
//  WLTextView.m
//  WLWidget
//
//  Created by 刘光强 on 2018/5/30.
//  Copyright © 2018年 quangqiang. All rights reserved.
//

#import "WLTextView.h"
#import "MacroHeader.h"
#import "CategoryHeader.h"

@interface WLTextView()

@property (nonatomic, strong) UILabel *placeholderLabel;
@end

@implementation WLTextView

- (id)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    if (self) {
        [self initialize];
    }
    return self;
}

- (id)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self initialize];
    }
    return self;
}

- (id)init {
    self = [super init];
    if (self) {
        [self initialize];
    }
    return self;
}

- (void)initialize {
    _placeholderColor = placeHolderColor;
    [self renderViews];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(textChanged:) name:UITextViewTextDidChangeNotification object:self];
}

- (void)textChanged:(NSNotification *)notification {
    if (notification.object == self) {
        [self renderViews];
    }
}

- (void)renderViews {
    _placeholderLabel.alpha = [self.text length] > 0 || [_placeholderText length] == 0 ? 0 : 1;
}

- (void)setText:(NSString *)text {
    [super setText:text];
    [self renderViews];
}

- (void)setPlaceholderText:(NSString*)placeholderText {
    _placeholderText = placeholderText;
    [self setNeedsDisplay];
}

- (void)setPlaceholderColor:(UIColor*)color {
    _placeholderColor = color;
    [self setNeedsDisplay];
}

- (void)drawRect:(CGRect)rect {
    if (self.placeholderText.length) {
        if (!_placeholderLabel) {
            CGSize placeholderSize = [UILabel calculateLableSizeWithLableText:self.placeholderText font:[UIFont systemFontOfSize:14] maxWidth:SCREEN_WIDTH];
            _placeholderLabel = [[UILabel alloc] initWithFrame:CGRectMake(WIDTH(self) - placeholderSize.width, 0, placeholderSize.width, HEIGHT(self))];
            _placeholderLabel.font = self.font;
            _placeholderLabel.alpha = 0;
            _placeholderLabel.backgroundColor = red_color;
            _placeholderLabel.textAlignment = NSTextAlignmentRight;
            [self addSubview:_placeholderLabel];
        }
        _placeholderLabel.text = _placeholderText;
        _placeholderLabel.textColor = _placeholderColor;
        [self sendSubviewToBack:_placeholderLabel];
    }
    [self renderViews];
    [super drawRect:rect];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
