// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKED64SINGLEBLOCK_H
#define ORGAPACHELUCENEUTILPACKEDPACKED64SINGLEBLOCK_H

@class MutableImpl;


#import "IOSLongArray.h"

@interface OrgApacheLuceneUtilPackedPacked64SingleBlock : MutableImpl {
    IOSLongArray *blocks_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)clear;
-(NSInteger)ramBytesUsed;
-(int)getWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)setWithInt:(int)arg0 withLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)fillWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(id)getFormat;
-(id)description;
-(void)dealloc;
+(BOOL)isSupportedWithInt:(int)arg0 ;
+(id)createWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)createWithInt:(int)arg0 withInt:(int)arg1 ;
+(void)initialize;


@end


#endif