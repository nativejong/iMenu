//
//  OPage+Data.h
//  Quantum
//
//  Created by John Blaine on 5/22/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import "OPage.h"

NS_ASSUME_NONNULL_BEGIN

@interface OPage (Data)
- (NSString*)getFirst:(NSMutableDictionary*)d;
- (NSMutableDictionary*)getObj:(NSMutableDictionary*)d current:(NSString*) c;

@end

NS_ASSUME_NONNULL_END
