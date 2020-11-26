//
//  Progress.h
//  Test
//
//  Created by John Blaine on 10/25/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Progress : UIView

- (instancetype)initWithFrame:(CGRect)frame  background:(UIColor*)b;

@property (nonatomic, retain) UIButton *msg;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

- (void)showProgress:(nullable NSString*) s;

@end

NS_ASSUME_NONNULL_END
