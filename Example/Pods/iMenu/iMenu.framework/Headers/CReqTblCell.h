//
//  CReqTblCell.h
//  Quantum
//
//  Created by John Blaine on 4/30/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CReqTblCell : UITableViewCell<UITextFieldDelegate>
@property (nonatomic, retain) UIButton *zel;
@property (nonatomic, retain) UITextField *req;
@property (nonatomic, retain) UITextField *price;
@property NSString *old;

- (void)setVal:(NSString*)newValue;

- (void)taskWithName:(NSInteger)idx prev:(void(^)(NSInteger ix, NSString *o, NSString *val, NSString *price))cprev;
@property (copy, nonatomic) void (^nextCB)(NSInteger ix, NSString *o, NSString *val, NSString *price);

@end

NS_ASSUME_NONNULL_END
