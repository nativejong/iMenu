//
//  NPhoto+File.h
//  Test
//
//  Created by John Blaine on 11/28/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import "NPhoto.h"

NS_ASSUME_NONNULL_BEGIN

@interface NPhoto (File)
- (NSString*) pathMinusFirstToken:(NSString*) fname;
- (NSString *) projPath;

- (NSData*)encode:(NSData *)d;
- (NSData*)decode:(NSData *)d;
- (NSString *) getFDate:(NSString*)path  fname:(NSString*)f;
- (NSData*) FRead:(NSString*)path  fname:(NSString*)f;
- (NSString *) currentPath:(NSString*) fname;
- (void) mkDirMinusFname:(NSString*) fname;
- (void) ModDate:(NSString*) fname  newdate:(NSString*)d;
@end

NS_ASSUME_NONNULL_END
