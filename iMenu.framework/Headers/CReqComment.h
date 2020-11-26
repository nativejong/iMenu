//
//  CReqComment.h
//  Quantum
//
//  Created by John Blaine on 4/30/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CReqComment : UIView
    @property (nonatomic, retain) UIButton *title;
    @property (nonatomic, retain) UITextView *comment;
    @property (nonatomic, retain) UIButton *prev;
    @property (nonatomic, retain) UIButton *ok;

    - (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;

    - (void)taskWithName:(NSInteger)name prev:(void(^)(NSInteger))cprev  next:(void(^)(NSInteger))cnext;
    @property (copy, nonatomic) void (^nextCB)(NSInteger i);
    @property (copy, nonatomic) void (^prevCB)(NSInteger i);

@end

NS_ASSUME_NONNULL_END
