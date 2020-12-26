//
//  OMenuCell+Network.h
//  Rama2020
//
//  Created by John Blaine on 2/8/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//
#import "OMenuCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface OMenuCell (Network)
//- (void)taskWithName:(NSString*)u date:(NSString*)d remote:(void(^)(UIImage* i, NSString *fn))cremote  local:(void (^)(UIImage* i, NSString *fn))clocal;

- (void)taskWithName:(NSString*)u date:(NSString*)d local:(void (^)(UIImage* i, NSString *fn))clocal mem:(void(^)(NSString *fn))cmem;

//- (void)taskImage:(NSString*)u date:(NSString*)d;

@end

NS_ASSUME_NONNULL_END
