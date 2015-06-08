//
//  KSToastView.h
//  KSToastViewDemo
//
//  Created by c0ming on 6/6/15.
//  Copyright (c) 2015 c0ming. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KSToastView : UIView

/**
 *  ToastView Config
 */
+ (void)ks_setAppearanceBackgroundColor:(UIColor *)backgroundColor;
+ (void)ks_setAppearanceCornerRadius:(CGFloat)cornerRadius;
+ (void)ks_setAppearanceMaxHeight:(CGFloat)maxHeight;
+ (void)ks_setAppearanceMaxWidth:(CGFloat)maxWidth;
+ (void)ks_setAppearanceOffsetBottom:(CGFloat)offsetBottom;
+ (void)ks_setAppearanceTextAligment:(NSTextAlignment)textAlignment;
+ (void)ks_setAppearanceTextColor:(UIColor *)textColor;
+ (void)ks_setAppearanceTextFont:(UIFont *)textFont;
+ (void)ks_setAppearanceTextPadding:(CGFloat)textPadding;
+ (void)ks_setToastViewShowDuration:(NSTimeInterval)duration;

/**
 *  ToastView Show
 */
+ (void)ks_showToast:(id)toast;
+ (void)ks_showToast:(id)toast duration:(NSTimeInterval)duration;

@end
