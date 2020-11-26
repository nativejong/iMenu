//
//  Filter.h
//  Test
//
//  Created by John Blaine on 10/12/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Filter : NSObject

@property (nonatomic, retain) NSString *storeDir;


-(NSString*) dirName;

-(void) addStoreDir:(NSString*)u;
- (void)urlPhoto:(NSString *)pth  local:(void (^)(NSData* i, NSString *fn))clocal;

- (void)urlMenu:(NSString *)pth  store:(nullable NSString*)s local:(void (^)(NSData* i, NSString *fn))clocal;

-(void) fetchData:(NSString*)u brk:(NSString*)b why:(NSDictionary*)w cback:(void(^)(NSArray *data))cb;

-(void) fetchData:(NSString*)u c:(NSString*)city brk:(NSString*)b why:(NSDictionary*)w cback:(void(^)(NSArray *data))cb;

-(void) saveArray:(NSMutableArray*)rv fname:(NSString*)city;
- (void) moveDir:(NSString*)src target:(NSString*) trg;

@end

NS_ASSUME_NONNULL_END
