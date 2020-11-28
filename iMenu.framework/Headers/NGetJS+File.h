//
//  NGetJS+File.h
//  iMenu
//
//  Created by John Blaine on 11/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import "NGetJS.h"

NS_ASSUME_NONNULL_BEGIN

@interface NGetJS (File)
-(NSString*) fileName:(NSString*)u;
- (NSData*) FRead:(NSString*)fn;
- (NSData*)encode:(NSData *)d;
- (NSData*)decode:(NSData *)d;

@end

NS_ASSUME_NONNULL_END
