//
//  OMenu.h
//  Quantum
//
//  Created by John Blaine on 5/10/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OMenuCell.h"
#import "OPage.h"
//#import "CPhotoURL.h"
//#import "CPhotoShot.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OMenuProto <NSObject>
@required
- (void) menuFBaseProto:(NSMutableDictionary*)i image:(UIImage*) im;
- (void) menuProto:(NSMutableDictionary*)i;
@end

@interface OMenu : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout, OPageProto>
@property (nonatomic, retain) UIActivityIndicatorView *indicator;

@property (nonatomic, strong) UICollectionView *myTbl;
@property (nonatomic, strong) NSMutableArray *myData;
@property (nonatomic, strong) UIColor *bgColor;
@property (nonatomic, assign) NSInteger col;

@property (nonatomic, strong) OPage *opage;

@property (nonatomic, weak) id<OMenuProto> proto;

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c col:(NSInteger)n showMenu:(Boolean)b;

- (void)setIt:(NSMutableDictionary*)r;
- (void)refresh;
- (void)clear;
- (void) showIndicator:(Boolean)b;


@end

NS_ASSUME_NONNULL_END
