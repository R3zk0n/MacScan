// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILDOCIDSETBUILDER_H
#define ORGAPACHELUCENEUTILDOCIDSETBUILDER_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "OrgApacheLuceneUtilBitSet.h"

@interface OrgApacheLuceneUtilDocIdSetBuilder : NSObject {
    int maxDoc_;
    int threshold_;
    IOSIntArray *buffer_;
    int bufferSize_;
    OrgApacheLuceneUtilBitSet *bitSet_;
}




-(id)initWithInt:(int)arg0 ;
-(void)upgradeToBitSet;
-(void)growBufferWithInt:(int)arg0 ;
-(void)addWithOrgApacheLuceneSearchDocIdSetIterator:(id)arg0 ;
-(void)growWithInt:(int)arg0 ;
-(void)addWithInt:(int)arg0 ;
-(id)build;
-(id)buildWithLong:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif