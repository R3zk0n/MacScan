// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILCHARSREF_H
#define ORGAPACHELUCENEUTILCHARSREF_H


#import <Foundation/Foundation.h>

#import "IOSCharArray.h"
#import "JavaLangComparable-Protocol.h"
#import "JavaLangCharSequence-Protocol.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneUtilCharsRef : NSObject <JavaLangComparable, JavaLangCharSequence, NSCopying>

 {
    IOSCharArray *chars_;
    int offset_;
    int length_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithNSString:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)charsEqualsWithOrgApacheLuceneUtilCharsRef:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(int)length;
-(unsigned short)charAtWithInt:(int)arg0 ;
-(id)subSequenceFrom:(int)arg0 to:(int)arg1 ;
-(BOOL)isValid;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getUTF16SortedAsUTF8Comparator;
+(id)deepCopyOfWithOrgApacheLuceneUtilCharsRef:(id)arg0 ;
+(void)initialize;


@end


#endif