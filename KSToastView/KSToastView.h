//
//  KSToastView.h
//
// The MIT License (MIT)
//
// Copyright (c) 2015 c0ming ( https://github.com/c0ming )
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#import <UIKit/UIKit.h>

typedef void (^KSToastBlock)(void);

@interface KSToastView : UIView

/**
 *  ToastView Config
 */
+ (void)ks_setAppearanceBackgroundColor:(UIColor *)backgroundColor;
+ (void)ks_setAppearanceCornerRadius:(CGFloat)cornerRadius;
+ (void)ks_setAppearanceMaxWidth:(CGFloat)maxWidth;
+ (void)ks_setAppearanceMaxLines:(NSInteger)maxLines;
+ (void)ks_setAppearanceOffsetBottom:(CGFloat)offsetBottom;
+ (void)ks_setAppearanceTextAligment:(NSTextAlignment)textAlignment;
+ (void)ks_setAppearanceTextColor:(UIColor *)textColor;
+ (void)ks_setAppearanceTextFont:(UIFont *)textFont;
+ (void)ks_setAppearanceTextInsets:(UIEdgeInsets)textInsets;
+ (void)ks_setToastViewShowDuration:(NSTimeInterval)duration;

/**
 *  ToastView Show
 */
+ (void)ks_showToast:(id)toast;
+ (void)ks_showToast:(id)toast duration:(NSTimeInterval)duration;
+ (void)ks_showToast:(id)toast delay:(NSTimeInterval)delay;
+ (void)ks_showToast:(id)toast completion:(KSToastBlock)completion;
+ (void)ks_showToast:(id)toast duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay;
+ (void)ks_showToast:(id)toast duration:(NSTimeInterval)duration completion:(KSToastBlock)completion;
+ (void)ks_showToast:(id)toast delay:(NSTimeInterval)delay completion:(KSToastBlock)completion;
+ (void)ks_showToast:(id)toast duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay completion:(KSToastBlock)completion;

/**
 *  @Deprecated
 *  Please use + (void)ks_setAppearanceTextInsets:(UIEdgeInsets)textInsets;
 */
+ (void)ks_setAppearanceTextPadding:(CGFloat)textPadding __attribute__((deprecated));

/**
 *  @Deprecated
 *  Please use + (void)ks_setAppearanceMaxLines:(CGFloat)maxLines;
 */
+ (void)ks_setAppearanceMaxHeight:(CGFloat)maxHeight __attribute__((deprecated));

@end
