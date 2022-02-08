// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSTERMVECTORSWRITER_H
#define ORGAPACHELUCENECODECSTERMVECTORSWRITER_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsTermVectorsWriter : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)finishDocument;
-(void)finishField;
-(void)finishTerm;
-(void)addProxWithInt:(int)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 withOrgApacheLuceneStoreDataInput:(id)arg2 ;
-(int)mergeWithOrgApacheLuceneIndexMergeState:(id)arg0 ;
-(void)addAllDocVectorsWithOrgApacheLuceneIndexFields:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 ;


@end


#endif