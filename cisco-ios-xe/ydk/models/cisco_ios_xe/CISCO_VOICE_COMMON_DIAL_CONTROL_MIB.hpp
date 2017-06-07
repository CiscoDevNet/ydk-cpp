#ifndef _CISCO_VOICE_COMMON_DIAL_CONTROL_MIB_
#define _CISCO_VOICE_COMMON_DIAL_CONTROL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_VOICE_COMMON_DIAL_CONTROL_MIB {

class CiscoVoiceCommonDialControlMib : public Entity
{
    public:
        CiscoVoiceCommonDialControlMib();
        ~CiscoVoiceCommonDialControlMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cvcommondccallactivetable; //type: CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable
        class Cvcommondccallhistorytable; //type: CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable

        std::shared_ptr<CISCO_VOICE_COMMON_DIAL_CONTROL_MIB::CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable> cvcommondccallactivetable;
        std::shared_ptr<CISCO_VOICE_COMMON_DIAL_CONTROL_MIB::CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable> cvcommondccallhistorytable;
        
}; // CiscoVoiceCommonDialControlMib


class CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable : public Entity
{
    public:
        Cvcommondccallactivetable();
        ~Cvcommondccallactivetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcommondccallactiveentry; //type: CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry

        std::vector<std::shared_ptr<CISCO_VOICE_COMMON_DIAL_CONTROL_MIB::CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry> > cvcommondccallactiveentry;
        
}; // CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable


class CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry : public Entity
{
    public:
        Cvcommondccallactiveentry();
        ~Cvcommondccallactiveentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactivesetuptime)
        YLeaf callactivesetuptime;
        //type: int32 (refers to DIAL_CONTROL_MIB::DialControlMib::Callactivetable::Callactiveentry::callactiveindex)
        YLeaf callactiveindex;
        YLeaf cvcommondccallactiveconnectionid; //type: binary
        YLeaf cvcommondccallactivevadenable; //type: boolean
        YLeaf cvcommondccallactivecodertyperate; //type: CvccodertyperateEnum
        YLeaf cvcommondccallactivecodecbytes; //type: int32
        YLeaf cvcommondccallactiveinbandsignaling; //type: CvcinbandsignalingEnum
        YLeaf cvcommondccallactivecallingname; //type: string
        YLeaf cvcommondccallactivecalleridblock; //type: boolean

}; // CiscoVoiceCommonDialControlMib::Cvcommondccallactivetable::Cvcommondccallactiveentry


class CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable : public Entity
{
    public:
        Cvcommondccallhistorytable();
        ~Cvcommondccallhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cvcommondccallhistoryentry; //type: CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry

        std::vector<std::shared_ptr<CISCO_VOICE_COMMON_DIAL_CONTROL_MIB::CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry> > cvcommondccallhistoryentry;
        
}; // CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable


class CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry : public Entity
{
    public:
        Cvcommondccallhistoryentry();
        ~Cvcommondccallhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_DIAL_CONTROL_MIB::CiscoDialControlMib::Ccallhistorytable::Ccallhistoryentry::ccallhistoryindex)
        YLeaf ccallhistoryindex;
        YLeaf cvcommondccallhistoryconnectionid; //type: binary
        YLeaf cvcommondccallhistoryvadenable; //type: boolean
        YLeaf cvcommondccallhistorycodertyperate; //type: CvccodertyperateEnum
        YLeaf cvcommondccallhistorycodecbytes; //type: int32
        YLeaf cvcommondccallhistoryinbandsignaling; //type: CvcinbandsignalingEnum
        YLeaf cvcommondccallhistorycallingname; //type: string
        YLeaf cvcommondccallhistorycalleridblock; //type: boolean

}; // CiscoVoiceCommonDialControlMib::Cvcommondccallhistorytable::Cvcommondccallhistoryentry

class CvcinbandsignalingEnum : public Enum
{
    public:
        static const Enum::YLeaf cas;
        static const Enum::YLeaf none;
        static const Enum::YLeaf cept;
        static const Enum::YLeaf transparent;
        static const Enum::YLeaf gr303;

};

class CvccodertyperateEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf fax2400;
        static const Enum::YLeaf fax4800;
        static const Enum::YLeaf fax7200;
        static const Enum::YLeaf fax9600;
        static const Enum::YLeaf fax14400;
        static const Enum::YLeaf fax12000;
        static const Enum::YLeaf g729r8000;
        static const Enum::YLeaf g729Ar8000;
        static const Enum::YLeaf g726r16000;
        static const Enum::YLeaf g726r24000;
        static const Enum::YLeaf g726r32000;
        static const Enum::YLeaf g711ulawr64000;
        static const Enum::YLeaf g711Alawr64000;
        static const Enum::YLeaf g728r16000;
        static const Enum::YLeaf g723r6300;
        static const Enum::YLeaf g723r5300;
        static const Enum::YLeaf gsmr13200;
        static const Enum::YLeaf g729Br8000;
        static const Enum::YLeaf g729ABr8000;
        static const Enum::YLeaf g723Ar6300;
        static const Enum::YLeaf g723Ar5300;
        static const Enum::YLeaf ietfg729r8000;
        static const Enum::YLeaf gsmeEr12200;
        static const Enum::YLeaf clearChannel;
        static const Enum::YLeaf g726r40000;
        static const Enum::YLeaf llcc;
        static const Enum::YLeaf gsmAmrNb;
        static const Enum::YLeaf g722;
        static const Enum::YLeaf iLBC;
        static const Enum::YLeaf iLBCr15200;
        static const Enum::YLeaf iLBCr13330;
        static const Enum::YLeaf g722r4800;
        static const Enum::YLeaf g722r5600;
        static const Enum::YLeaf g722r6400;
        static const Enum::YLeaf iSAC;
        static const Enum::YLeaf aaclc;
        static const Enum::YLeaf aacld;

};

class CvcvideocoderrateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf h261;
        static const Enum::YLeaf h263;
        static const Enum::YLeaf h263plus;
        static const Enum::YLeaf h264;

};

class Cvch320CalltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf primary;
        static const Enum::YLeaf secondary;

};

class CvcspeechcoderrateEnum : public Enum
{
    public:
        static const Enum::YLeaf g729r8000;
        static const Enum::YLeaf g729Ar8000;
        static const Enum::YLeaf g726r16000;
        static const Enum::YLeaf g726r24000;
        static const Enum::YLeaf g726r32000;
        static const Enum::YLeaf g711ulawr64000;
        static const Enum::YLeaf g711Alawr64000;
        static const Enum::YLeaf g728r16000;
        static const Enum::YLeaf g723r6300;
        static const Enum::YLeaf g723r5300;
        static const Enum::YLeaf gsmr13200;
        static const Enum::YLeaf g729Br8000;
        static const Enum::YLeaf g729ABr8000;
        static const Enum::YLeaf g723Ar6300;
        static const Enum::YLeaf g723Ar5300;
        static const Enum::YLeaf g729IETFr8000;
        static const Enum::YLeaf gsmeEr12200;
        static const Enum::YLeaf clearChannel;
        static const Enum::YLeaf g726r40000;
        static const Enum::YLeaf llcc;
        static const Enum::YLeaf gsmAmrNb;
        static const Enum::YLeaf iLBC;
        static const Enum::YLeaf iLBCr15200;
        static const Enum::YLeaf iLBCr13330;
        static const Enum::YLeaf g722r4800;
        static const Enum::YLeaf g722r5600;
        static const Enum::YLeaf g722r6400;
        static const Enum::YLeaf iSAC;
        static const Enum::YLeaf aaclc;
        static const Enum::YLeaf aacld;

};

class CvcfaxtransmitrateEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf voiceRate;
        static const Enum::YLeaf fax2400;
        static const Enum::YLeaf fax4800;
        static const Enum::YLeaf fax7200;
        static const Enum::YLeaf fax9600;
        static const Enum::YLeaf fax14400;
        static const Enum::YLeaf fax12000;

};


}
}

#endif /* _CISCO_VOICE_COMMON_DIAL_CONTROL_MIB_ */

