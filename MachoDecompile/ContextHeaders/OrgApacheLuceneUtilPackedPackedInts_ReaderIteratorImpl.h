// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_READERITERATORIMPL_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_READERITERATORIMPL_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataInput.h"
#import "OrgApacheLuceneUtilPackedPackedInts_ReaderIterator-Protocol.h"

@interface OrgApacheLuceneUtilPackedPackedInts_ReaderIteratorImpl : NSObject <OrgApacheLuceneUtilPackedPackedInts_ReaderIterator>

 {
    OrgApacheLuceneStoreDataInput *in_;
    int bitsPerValue_;
    int valueCount_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneStoreDataInput:(id)arg2 ;
-(NSInteger)next;
-(int)getBitsPerValue;
-(int)size;
-(void)dealloc;


@end


#endif