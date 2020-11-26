//
//  CPhotoLoad.h
//  Quantum
//
//  Created by John Blaine on 5/1/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CPhotoLoad : NSObject

- (void)taskWithName:(NSString*)u date:(NSString*)d local:(void (^)(UIImage* i, NSString *fn))clocal;

@end

NS_ASSUME_NONNULL_END
