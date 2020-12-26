//
//  Setup.h
//  Test
//
//  Created by John Blaine on 10/26/20.
//

#import <UIKit/UIKit.h>
#import "Archive.h"
#import "Progress.h"
#import "FileSystem.h"
#import "Count.h"

NS_ASSUME_NONNULL_BEGIN

@interface Setup : UIView <UITableViewDataSource, UITableViewDelegate>

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)c;
@property (strong, nonatomic) UITableView *tbl;
@property (strong, nonatomic) NSMutableArray *displayData;
@property (strong, nonatomic) NSMutableDictionary *dirLst;
@property (strong, nonatomic) Progress *progress;

@property (strong, nonatomic) Count *count;

@property (strong, nonatomic) Archive *archive;
@property (strong, nonatomic) FileSystem *fileSystem;

- (void)watch:(void(^)(NSMutableDictionary *list))lx;
@property (copy, nonatomic) void (^dataCB)(NSMutableDictionary *list);

@end

NS_ASSUME_NONNULL_END
