###KSToastView

Simple Popup Notification inspired by [Android Toast Widget](http://developer.android.com/intl/zh-cn/guide/topics/ui/notifiers/toasts.html).

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

###Usage
```
/// show NSString
[KSToastView ks_showToast:@"Across the Great Wall we can reach every corner in the world."];

/// show NSObject description with 2 seconds.
[KSToastView ks_showToast:self duration:2.0f];
```

###Installation
Just add KSToastView.h/m files to your Project.

or use [CocoaPoads](https://cocoapods.org)
```
pod 'KSToastView', '0.3'
```


###License
[The MIT License (MIT)](./LICENSE)
