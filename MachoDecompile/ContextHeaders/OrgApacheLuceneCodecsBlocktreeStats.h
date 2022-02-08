// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSBLOCKTREESTATS_H
#define ORGAPACHELUCENECODECSBLOCKTREESTATS_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"

@interface OrgApacheLuceneCodecsBlocktreeStats : NSObject {
    NSInteger indexNumBytes_;
    NSInteger totalTermCount_;
    NSInteger totalTermBytes_;
    int nonFloorBlockCount_;
    int floorBlockCount_;
    int floorSubBlockCount_;
    int mixedBlockCount_;
    int termsOnlyBlockCount_;
    int subBlocksOnlyBlockCount_;
    int totalBlockCount_;
    IOSIntArray *blockCountByPrefixLen_;
    NSInteger totalBlockSuffixBytes_;
    NSInteger totalBlockStatsBytes_;
    NSInteger totalBlockOtherBytes_;
    NSString *segment_;
    NSString *field_;
    int startBlockCount_;
    int endBlockCount_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)startBlockWithOrgApacheLuceneCodecsBlocktreeSegmentTermsEnumFrame:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)endBlockWithOrgApacheLuceneCodecsBlocktreeSegmentTermsEnumFrame:(id)arg0 ;
-(void)termWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)finish;
-(id)description;
-(void)dealloc;


@end


#endif