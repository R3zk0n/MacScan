// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISUTILCHARACTERUTILS_H
#define ORGAPACHELUCENEANALYSISUTILCHARACTERUTILS_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneAnalysisUtilCharacterUtils : NSObject



-(void)toLowerCaseWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)toUpperCaseWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)toCodePointsWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withInt:(int)arg4 ;
-(int)toCharsWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withCharArray:(id)arg3 withInt:(int)arg4 ;
-(BOOL)fillWithOrgApacheLuceneAnalysisUtilCharacterUtils_CharacterBuffer:(id)arg0 withJavaIoReader:(id)arg1 ;
-(id)init;
+(id)getInstance;
+(id)getJava4Instance;
+(id)newCharacterBufferWithInt:(int)arg0 ;
+(int)readFullyWithJavaIoReader:(id)arg0 withCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)initialize;


@end


#endif