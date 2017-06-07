#ifndef _CISCO_IETF_BFD_MIB_
#define _CISCO_IETF_BFD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_BFD_MIB {

class CiscoIetfBfdMib : public Entity
{
    public:
        CiscoIetfBfdMib();
        ~CiscoIetfBfdMib();

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

        class Ciscobfdscalarobjects; //type: CiscoIetfBfdMib::Ciscobfdscalarobjects
        class Ciscobfdsesstable; //type: CiscoIetfBfdMib::Ciscobfdsesstable
        class Ciscobfdsessmaptable; //type: CiscoIetfBfdMib::Ciscobfdsessmaptable
        class Ciscobfdsessdiscmaptable; //type: CiscoIetfBfdMib::Ciscobfdsessdiscmaptable
        class Ciscobfdsessipmaptable; //type: CiscoIetfBfdMib::Ciscobfdsessipmaptable

        std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdscalarobjects> ciscobfdscalarobjects;
        std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessdiscmaptable> ciscobfdsessdiscmaptable;
        std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessipmaptable> ciscobfdsessipmaptable;
        std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessmaptable> ciscobfdsessmaptable;
        std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable> ciscobfdsesstable;
        
}; // CiscoIetfBfdMib


class CiscoIetfBfdMib::Ciscobfdscalarobjects : public Entity
{
    public:
        Ciscobfdscalarobjects();
        ~Ciscobfdscalarobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscobfdadminstatus; //type: CiscobfdadminstatusEnum
        YLeaf ciscobfdversionnumber; //type: uint32
        YLeaf ciscobfdsessnotificationsenable; //type: boolean
        class CiscobfdadminstatusEnum;

}; // CiscoIetfBfdMib::Ciscobfdscalarobjects


class CiscoIetfBfdMib::Ciscobfdsesstable : public Entity
{
    public:
        Ciscobfdsesstable();
        ~Ciscobfdsesstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscobfdsessentry; //type: CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry> > ciscobfdsessentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsesstable


class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry : public Entity
{
    public:
        Ciscobfdsessentry();
        ~Ciscobfdsessentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciscobfdsessindex; //type: uint32
        YLeaf ciscobfdsessapplicationid; //type: uint32
        YLeaf ciscobfdsessdiscriminator; //type: uint32
        YLeaf ciscobfdsessremotediscr; //type: uint32
        YLeaf ciscobfdsessudpport; //type: uint16
        YLeaf ciscobfdsessstate; //type: CiscobfdsessstateEnum
        YLeaf ciscobfdsessremoteheardflag; //type: boolean
        YLeaf ciscobfdsessdiag; //type: CiscobfddiagEnum
        YLeaf ciscobfdsessopermode; //type: CiscobfdsessopermodeEnum
        YLeaf ciscobfdsessdemandmodedesiredflag; //type: boolean
        YLeaf ciscobfdsessechofuncmodedesiredflag; //type: boolean
        YLeaf ciscobfdsesscontrolplanindepflag; //type: boolean
        YLeaf ciscobfdsessaddrtype; //type: InetaddresstypeEnum
        YLeaf ciscobfdsessaddr; //type: binary
        YLeaf ciscobfdsessdesiredmintxinterval; //type: uint32
        YLeaf ciscobfdsessreqminrxinterval; //type: uint32
        YLeaf ciscobfdsessreqminechorxinterval; //type: uint32
        YLeaf ciscobfdsessdetectmult; //type: uint32
        YLeaf ciscobfdsessstortype; //type: StoragetypeEnum
        YLeaf ciscobfdsessrowstatus; //type: RowstatusEnum
        YLeaf ciscobfdsessauthpresflag; //type: boolean
        YLeaf ciscobfdsessauthenticationtype; //type: CiscobfdsessauthenticationtypeEnum
        YLeaf ciscobfdsessversionnumber; //type: uint32
        YLeaf ciscobfdsesstype; //type: CiscobfdsesstypeEnum
        YLeaf ciscobfdsessinterface; //type: int32
        YLeaf ciscobfdsessperfpktin; //type: uint32
        YLeaf ciscobfdsessperfpktout; //type: uint32
        YLeaf ciscobfdsessuptime; //type: uint32
        YLeaf ciscobfdsessperflastsessdowntime; //type: uint32
        YLeaf ciscobfdsessperflastcommlostdiag; //type: CiscobfddiagEnum
        YLeaf ciscobfdsessperfsessupcount; //type: uint32
        YLeaf ciscobfdsessperfdisctime; //type: uint32
        YLeaf ciscobfdsessperfpktinhc; //type: uint64
        YLeaf ciscobfdsessperfpktouthc; //type: uint64
        class CiscobfdsessstateEnum;
        class CiscobfdsessopermodeEnum;
        class CiscobfdsessauthenticationtypeEnum;
        class CiscobfdsesstypeEnum;

}; // CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry


class CiscoIetfBfdMib::Ciscobfdsessmaptable : public Entity
{
    public:
        Ciscobfdsessmaptable();
        ~Ciscobfdsessmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscobfdsessmapentry; //type: CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry> > ciscobfdsessmapentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsessmaptable


class CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry : public Entity
{
    public:
        Ciscobfdsessmapentry();
        ~Ciscobfdsessmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessapplicationid)
        YLeaf ciscobfdsessapplicationid;
        //type: uint32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessdiscriminator)
        YLeaf ciscobfdsessdiscriminator;
        YLeaf ciscobfdsessaddrtype; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessaddr)
        YLeaf ciscobfdsessaddr;
        YLeaf ciscobfdsessmapbfdindex; //type: uint32

}; // CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry


class CiscoIetfBfdMib::Ciscobfdsessdiscmaptable : public Entity
{
    public:
        Ciscobfdsessdiscmaptable();
        ~Ciscobfdsessdiscmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscobfdsessdiscmapentry; //type: CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry> > ciscobfdsessdiscmapentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsessdiscmaptable


class CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry : public Entity
{
    public:
        Ciscobfdsessdiscmapentry();
        ~Ciscobfdsessdiscmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessdiscriminator)
        YLeaf ciscobfdsessdiscriminator;
        YLeaf ciscobfdsessdiscmapindex; //type: uint32

}; // CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry


class CiscoIetfBfdMib::Ciscobfdsessipmaptable : public Entity
{
    public:
        Ciscobfdsessipmaptable();
        ~Ciscobfdsessipmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciscobfdsessipmapentry; //type: CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry> > ciscobfdsessipmapentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsessipmaptable


class CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry : public Entity
{
    public:
        Ciscobfdsessipmapentry();
        ~Ciscobfdsessipmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessinterface)
        YLeaf ciscobfdsessinterface;
        YLeaf ciscobfdsessaddrtype; //type: InetaddresstypeEnum
        //type: binary (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessaddr)
        YLeaf ciscobfdsessaddr;
        YLeaf ciscobfdsessipmapindex; //type: uint32

}; // CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry

class CiscobfddiagEnum : public Enum
{
    public:
        static const Enum::YLeaf noDiagnostic;
        static const Enum::YLeaf controlDetectionTimeExpired;
        static const Enum::YLeaf echoFunctionFailed;
        static const Enum::YLeaf neighborSignaledSessionDown;
        static const Enum::YLeaf forwardingPlaneReset;
        static const Enum::YLeaf pathDown;
        static const Enum::YLeaf concatenatedPathDown;
        static const Enum::YLeaf administrativelyDown;
        static const Enum::YLeaf reverseConcatenatedPathDown;

};

class CiscoIetfBfdMib::Ciscobfdscalarobjects::CiscobfdadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf enabled;
        static const Enum::YLeaf disabled;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessstateEnum : public Enum
{
    public:
        static const Enum::YLeaf adminDown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf init;
        static const Enum::YLeaf up;
        static const Enum::YLeaf failing;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessopermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf asyncModeWEchoFun;
        static const Enum::YLeaf asynchModeWOEchoFun;
        static const Enum::YLeaf demandModeWEchoFunction;
        static const Enum::YLeaf demandModeWOEchoFunction;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessauthenticationtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf simplePassword;
        static const Enum::YLeaf keyedMD5;
        static const Enum::YLeaf meticulousKeyedMD5;
        static const Enum::YLeaf keyedSHA1;
        static const Enum::YLeaf meticulousKeyedSHA1;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsesstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf singleHop;
        static const Enum::YLeaf multiHop;

};


}
}

#endif /* _CISCO_IETF_BFD_MIB_ */

