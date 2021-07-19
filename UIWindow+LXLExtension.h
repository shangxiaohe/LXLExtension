//
//  UIWindow+LXLExtension.h
//  LXLExtension
//
//  Created by lixianliang on 2021/7/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIWindow (LXLExtension)
- (UIResponder *)firstResponder;
- (UIViewController *)topViewController;
- (UIViewController *)currentShowController;
- (UIViewController *)currentShowBottomController;
@end

NS_ASSUME_NONNULL_END
