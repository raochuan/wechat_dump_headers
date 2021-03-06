//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AttributeLabel.h"

@class NSString, UIColor, UIFont;

@interface FavAttributeCPLabel : AttributeLabel
{
    UIFont *m_font;
    UIColor *m_textColor;
    NSString *m_cpKey;
    double _lineSpace;
}

@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=m_cpKey;
- (void).cxx_destruct;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (void)internalSetLineSpace;
- (void)internalSetText;
- (void)formAttributedString;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

