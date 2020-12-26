//
//  OPageCell.h
//  Quantum
//
//  Created by John Blaine on 5/21/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OPageCell : UICollectionViewCell

@property (nonatomic, retain) UIButton *name;

- (NSString*)getNext:(NSMutableDictionary*)d current:(nullable NSString*) c;
- (NSMutableDictionary*)getObj:(NSMutableDictionary*)d current:(NSString*) c;

@end

NS_ASSUME_NONNULL_END
