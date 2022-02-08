// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGCHARACTER_UNICODEBLOCK_H
#define JAVALANGCHARACTER_UNICODEBLOCK_H

@class Subset;



@interface JavaLangCharacter_UnicodeBlock : Subset {
    int rangeStart_;
    int rangeEnd_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)forNameWithNSString:(id)arg0 ;
+(id)ofWithChar:(unsigned short)arg0 ;
+(id)ofWithInt:(int)arg0 ;
+(int)forNameImplWithNSString:(id)arg0 ;
+(int)ofImplWithInt:(int)arg0 ;
+(void)initialize;
+(id)__annotations_SURROGATES_AREA_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif