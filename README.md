###KSToastView

Simple Popup Notification inspired by Android Toast.

![ScreenShot](./ScreenShot/ScreenShot.gif)

###KSToastView Configure
```
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
```
###KSToastView Show
```
+ (void)ks_showToast:(id)toast;
+ (void)ks_showToast:(id)toast duration:(NSTimeInterval)duration;
```
###License
The MIT License (MIT)
