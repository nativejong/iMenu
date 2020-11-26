//
//  CReqAlert.h
//  Rama2020
//
//  Created by John Blaine on 3/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

//#import <UIKit/UIKit.h>
//
//NS_ASSUME_NONNULL_BEGIN
//
//@interface CReqAlert : UIView
//
//@end
//
//NS_ASSUME_NONNULL_END
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CReqAlert : UIView

@property (nonatomic, retain) UIButton *msg;
@property (nonatomic, retain) UIButton *cart;

- (void) showIt:(NSString*)s;

@end

NS_ASSUME_NONNULL_END
