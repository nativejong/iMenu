//
//  SetupCell.h
//  Test
//
//  Created by John Blaine on 10/26/20.
//

#import <UIKit/UIKit.h>

@interface SetupCell : UITableViewCell
@property (nonatomic, retain) UIButton *checkBox;
@property (nonatomic, retain) UITextField *shop;
@property (nonatomic, retain) UIButton *visible;

- (void)setVal:(NSString*)newValue;

- (void)taskWithName:(NSInteger)idx prev:(void(^)(NSInteger ix, NSString *o, NSString *val, NSString *price))cprev;
@property (copy, nonatomic) void (^nextCB)(NSInteger ix, NSString *o, NSString *val, NSString *price);

@end
