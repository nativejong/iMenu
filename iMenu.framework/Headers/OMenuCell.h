//
//  OMenuCell.h
//  Quantum
//
//  Created by John Blaine on 5/10/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OMenuCell : UICollectionViewCell
@property (nonatomic, retain) UIImageView *img;
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, retain) UIButton *status;
@property (nonatomic, retain) UIButton *name;
@property (nonatomic, retain) UITextField *price;
@property (nonatomic, retain) UITextView *dscr;
@property (nonatomic, assign) NSInteger col;
@property (nonatomic, retain) UIButton *camera;

- (void)addItem:(NSString *) v;
- (void)addDscr:(NSString *) v;
- (void)addPrice:(NSString *) v;
- (void)imgVisible:(Boolean) b;
//- (void)adjFrame:(UIImageView *)im Photo:(UIImage *)p;
- (void) setBG:(UIColor*) c;
- (void) putImage:(nullable UIImage*) c;
- (void) putImg:(NSString*) c;

- (void)taskImage:(NSString*)u date:(NSString*)d;

@end

NS_ASSUME_NONNULL_END
