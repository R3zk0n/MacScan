// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXWRITER_READERPOOL_H
#define ORGAPACHELUCENEINDEXINDEXWRITER_READERPOOL_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexIndexWriter_ReaderPool : NSObject <JavaIoCloseable>

 {
    id<JavaUtilMap> *readerMap_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)infoIsLiveWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(void)dropWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(BOOL)anyPendingDeletes;
-(void)release__WithOrgApacheLuceneIndexReadersAndUpdates:(id)arg0 ;
-(void)release__WithOrgApacheLuceneIndexReadersAndUpdates:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)close;
-(void)dropAllWithBoolean:(BOOL)arg0 ;
-(void)commitWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 ;
-(id)getWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)noDups;
-(id)initWithOrgApacheLuceneIndexIndexWriter:(id)arg0 ;
-(void)dealloc;


@end


#endif