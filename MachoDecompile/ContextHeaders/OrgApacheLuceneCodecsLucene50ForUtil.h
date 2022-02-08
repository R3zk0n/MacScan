// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50FORUTIL_H
#define ORGAPACHELUCENECODECSLUCENE50FORUTIL_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneCodecsLucene50ForUtil : NSObject {
    IOSIntArray *encodedSizes_;
    IOSObjectArray *encoders_;
    IOSObjectArray *decoders_;
    IOSIntArray *iterations_;
}




-(id)initWithFloat:(float)arg0 withOrgApacheLuceneStoreDataOutput:(id)arg1 ;
-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
-(void)writeBlockWithIntArray:(id)arg0 withByteArray:(id)arg1 withOrgApacheLuceneStoreIndexOutput:(id)arg2 ;
-(void)readBlockWithOrgApacheLuceneStoreIndexInput:(id)arg0 withByteArray:(id)arg1 withIntArray:(id)arg2 ;
-(void)skipBlockWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif