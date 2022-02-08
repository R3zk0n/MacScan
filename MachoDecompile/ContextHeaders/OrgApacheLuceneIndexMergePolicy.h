// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGEPOLICY_H
#define ORGAPACHELUCENEINDEXMERGEPOLICY_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneIndexMergePolicy : NSObject {
    CGFloat noCFSRatio_;
    NSInteger maxCFSSegmentSize_;
}




-(id)init;
-(id)initWithDouble:(CGFloat)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)useCompoundFileWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 withOrgApacheLuceneIndexSegmentCommitInfo:(id)arg1 withOrgApacheLuceneIndexIndexWriter:(id)arg2 ;
-(NSInteger)sizeWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneIndexIndexWriter:(id)arg1 ;
-(BOOL)isMergedWithOrgApacheLuceneIndexSegmentInfos:(id)arg0 withOrgApacheLuceneIndexSegmentCommitInfo:(id)arg1 withOrgApacheLuceneIndexIndexWriter:(id)arg2 ;
-(CGFloat)getNoCFSRatio;
-(void)setNoCFSRatioWithDouble:(CGFloat)arg0 ;
-(CGFloat)getMaxCFSSegmentSizeMB;
-(void)setMaxCFSSegmentSizeMBWithDouble:(CGFloat)arg0 ;


@end


#endif