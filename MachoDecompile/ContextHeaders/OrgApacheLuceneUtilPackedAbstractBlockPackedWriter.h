// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDABSTRACTBLOCKPACKEDWRITER_H
#define ORGAPACHELUCENEUTILPACKEDABSTRACTBLOCKPACKEDWRITER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataOutput.h"
#import "IOSLongArray.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneUtilPackedAbstractBlockPackedWriter : NSObject {
    OrgApacheLuceneStoreDataOutput *out_;
    IOSLongArray *values_;
    IOSByteArray *blocks_;
    int off_;
    NSInteger ord_;
    BOOL finished_;
}




-(id)initWithOrgApacheLuceneStoreDataOutput:(id)arg0 withInt:(int)arg1 ;
-(void)resetWithOrgApacheLuceneStoreDataOutput:(id)arg0 ;
-(void)checkNotFinished;
-(void)addWithLong:(NSInteger)arg0 ;
-(void)addBlockOfZeros;
-(void)finish;
-(NSInteger)ord;
-(void)writeValuesWithInt:(int)arg0 ;
-(void)dealloc;
+(void)writeVLongWithOrgApacheLuceneStoreDataOutput:(id)arg0 withLong:(NSInteger)arg1 ;


@end


#endif