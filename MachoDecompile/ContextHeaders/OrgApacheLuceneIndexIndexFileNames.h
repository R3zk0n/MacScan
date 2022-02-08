// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXFILENAMES_H
#define ORGAPACHELUCENEINDEXINDEXFILENAMES_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneIndexIndexFileNames : NSObject



-(id)init;
+(id)fileNameFromGenerationWithNSString:(id)arg0 withNSString:(id)arg1 withLong:(NSInteger)arg2 ;
+(id)segmentFileNameWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
+(BOOL)matchesExtensionWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)stripSegmentNameWithNSString:(id)arg0 ;
+(NSInteger)parseGenerationWithNSString:(id)arg0 ;
+(id)parseSegmentNameWithNSString:(id)arg0 ;
+(id)stripExtensionWithNSString:(id)arg0 ;
+(id)getExtensionWithNSString:(id)arg0 ;
+(void)initialize;


@end


#endif