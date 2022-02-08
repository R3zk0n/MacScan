// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENENSDATADIRECTORY_H
#define COMAPPLEPROACTIVELUCENENSDATADIRECTORY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreFSDirectory.h"

@interface ComAppleProactiveLuceneNSDataDirectory : OrgApacheLuceneStoreFSDirectory {
    NSString *absolutePath_;
    int minFileSizeForMapped_;
    BOOL useMadvise_;
    BOOL useOldDataInput_;
    int bufferSize_;
}




-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 withInt:(int)arg1 ;
-(id)initWithOrgLukhnosPortmobileFilePath:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withInt:(int)arg4 ;
-(id)openInputWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(void)madviseWithId:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif