//
//  NPhoto.h
//  Test
//
//  Created by John Blaine on 11/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NPhoto : NSObject
//- (void)taskWithName:(NSString*)u date:(NSString*)d local:(void (^)(UIImage* i, NSString *fn))clocal;
- (void)taskWithName:(NSString*)u date:(nullable NSString*)d local:(void (^)(UIImage* i, NSString *fn))clocal;

@end

NS_ASSUME_NONNULL_END
