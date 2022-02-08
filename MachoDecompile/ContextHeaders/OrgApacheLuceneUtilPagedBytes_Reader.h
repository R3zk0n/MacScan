// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPAGEDBYTES_READER_H
#define ORGAPACHELUCENEUTILPAGEDBYTES_READER_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneUtilPagedBytes_Reader : NSObject <OrgApacheLuceneUtilAccountable>

 {
    IOSObjectArray *blocks_;
    int blockBits_;
    int blockMask_;
    int blockSize_;
    NSInteger bytesUsedPerBlock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneUtilPagedBytes:(id)arg0 ;
-(void)fillSliceWithOrgApacheLuceneUtilBytesRef:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)fillWithOrgApacheLuceneUtilBytesRef:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
+(void)initialize;


@end


#endif