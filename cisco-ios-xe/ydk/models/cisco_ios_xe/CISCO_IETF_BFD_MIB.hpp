#ifndef _CISCO_IETF_BFD_MIB_
#define _CISCO_IETF_BFD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_BFD_MIB {

class CiscoIetfBfdMib : public ydk::Entity
{
    public:
        CiscoIetfBfdMib();
        ~CiscoIetfBfdMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

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


class CiscoIetfBfdMib::Ciscobfdscalarobjects : public ydk::Entity
{
    public:
        Ciscobfdscalarobjects();
        ~Ciscobfdscalarobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscobfdadminstatus; //type: Ciscobfdadminstatus
        ydk::YLeaf ciscobfdversionnumber; //type: uint32
        ydk::YLeaf ciscobfdsessnotificationsenable; //type: boolean
        class Ciscobfdadminstatus;

}; // CiscoIetfBfdMib::Ciscobfdscalarobjects


class CiscoIetfBfdMib::Ciscobfdsesstable : public ydk::Entity
{
    public:
        Ciscobfdsesstable();
        ~Ciscobfdsesstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscobfdsessentry; //type: CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry> > ciscobfdsessentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsesstable


class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry : public ydk::Entity
{
    public:
        Ciscobfdsessentry();
        ~Ciscobfdsessentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciscobfdsessindex; //type: uint32
        ydk::YLeaf ciscobfdsessapplicationid; //type: uint32
        ydk::YLeaf ciscobfdsessdiscriminator; //type: uint32
        ydk::YLeaf ciscobfdsessremotediscr; //type: uint32
        ydk::YLeaf ciscobfdsessudpport; //type: uint16
        ydk::YLeaf ciscobfdsessstate; //type: Ciscobfdsessstate
        ydk::YLeaf ciscobfdsessremoteheardflag; //type: boolean
        ydk::YLeaf ciscobfdsessdiag; //type: Ciscobfddiag
        ydk::YLeaf ciscobfdsessopermode; //type: Ciscobfdsessopermode
        ydk::YLeaf ciscobfdsessdemandmodedesiredflag; //type: boolean
        ydk::YLeaf ciscobfdsessechofuncmodedesiredflag; //type: boolean
        ydk::YLeaf ciscobfdsesscontrolplanindepflag; //type: boolean
        ydk::YLeaf ciscobfdsessaddrtype; //type: Inetaddresstype
        ydk::YLeaf ciscobfdsessaddr; //type: binary
        ydk::YLeaf ciscobfdsessdesiredmintxinterval; //type: uint32
        ydk::YLeaf ciscobfdsessreqminrxinterval; //type: uint32
        ydk::YLeaf ciscobfdsessreqminechorxinterval; //type: uint32
        ydk::YLeaf ciscobfdsessdetectmult; //type: uint32
        ydk::YLeaf ciscobfdsessstortype; //type: Storagetype
        ydk::YLeaf ciscobfdsessrowstatus; //type: Rowstatus
        ydk::YLeaf ciscobfdsessauthpresflag; //type: boolean
        ydk::YLeaf ciscobfdsessauthenticationtype; //type: Ciscobfdsessauthenticationtype
        ydk::YLeaf ciscobfdsessversionnumber; //type: uint32
        ydk::YLeaf ciscobfdsesstype; //type: Ciscobfdsesstype
        ydk::YLeaf ciscobfdsessinterface; //type: int32
        ydk::YLeaf ciscobfdsessperfpktin; //type: uint32
        ydk::YLeaf ciscobfdsessperfpktout; //type: uint32
        ydk::YLeaf ciscobfdsessuptime; //type: uint32
        ydk::YLeaf ciscobfdsessperflastsessdowntime; //type: uint32
        ydk::YLeaf ciscobfdsessperflastcommlostdiag; //type: Ciscobfddiag
        ydk::YLeaf ciscobfdsessperfsessupcount; //type: uint32
        ydk::YLeaf ciscobfdsessperfdisctime; //type: uint32
        ydk::YLeaf ciscobfdsessperfpktinhc; //type: uint64
        ydk::YLeaf ciscobfdsessperfpktouthc; //type: uint64
        class Ciscobfdsessstate;
        class Ciscobfdsessopermode;
        class Ciscobfdsessauthenticationtype;
        class Ciscobfdsesstype;

}; // CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry


class CiscoIetfBfdMib::Ciscobfdsessmaptable : public ydk::Entity
{
    public:
        Ciscobfdsessmaptable();
        ~Ciscobfdsessmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscobfdsessmapentry; //type: CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry> > ciscobfdsessmapentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsessmaptable


class CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry : public ydk::Entity
{
    public:
        Ciscobfdsessmapentry();
        ~Ciscobfdsessmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessapplicationid)
        ydk::YLeaf ciscobfdsessapplicationid;
        //type: uint32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessdiscriminator)
        ydk::YLeaf ciscobfdsessdiscriminator;
        ydk::YLeaf ciscobfdsessaddrtype; //type: Inetaddresstype
        //type: binary (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessaddr)
        ydk::YLeaf ciscobfdsessaddr;
        ydk::YLeaf ciscobfdsessmapbfdindex; //type: uint32

}; // CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry


class CiscoIetfBfdMib::Ciscobfdsessdiscmaptable : public ydk::Entity
{
    public:
        Ciscobfdsessdiscmaptable();
        ~Ciscobfdsessdiscmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscobfdsessdiscmapentry; //type: CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry> > ciscobfdsessdiscmapentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsessdiscmaptable


class CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry : public ydk::Entity
{
    public:
        Ciscobfdsessdiscmapentry();
        ~Ciscobfdsessdiscmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessdiscriminator)
        ydk::YLeaf ciscobfdsessdiscriminator;
        ydk::YLeaf ciscobfdsessdiscmapindex; //type: uint32

}; // CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry


class CiscoIetfBfdMib::Ciscobfdsessipmaptable : public ydk::Entity
{
    public:
        Ciscobfdsessipmaptable();
        ~Ciscobfdsessipmaptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciscobfdsessipmapentry; //type: CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry

        std::vector<std::shared_ptr<CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry> > ciscobfdsessipmapentry;
        
}; // CiscoIetfBfdMib::Ciscobfdsessipmaptable


class CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry : public ydk::Entity
{
    public:
        Ciscobfdsessipmapentry();
        ~Ciscobfdsessipmapentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessinterface)
        ydk::YLeaf ciscobfdsessinterface;
        ydk::YLeaf ciscobfdsessaddrtype; //type: Inetaddresstype
        //type: binary (refers to CISCO_IETF_BFD_MIB::CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::ciscobfdsessaddr)
        ydk::YLeaf ciscobfdsessaddr;
        ydk::YLeaf ciscobfdsessipmapindex; //type: uint32

}; // CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry

class Ciscobfddiag : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noDiagnostic;
        static const ydk::Enum::YLeaf controlDetectionTimeExpired;
        static const ydk::Enum::YLeaf echoFunctionFailed;
        static const ydk::Enum::YLeaf neighborSignaledSessionDown;
        static const ydk::Enum::YLeaf forwardingPlaneReset;
        static const ydk::Enum::YLeaf pathDown;
        static const ydk::Enum::YLeaf concatenatedPathDown;
        static const ydk::Enum::YLeaf administrativelyDown;
        static const ydk::Enum::YLeaf reverseConcatenatedPathDown;

};

class CiscoIetfBfdMib::Ciscobfdscalarobjects::Ciscobfdadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf disabled;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adminDown;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf init;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failing;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessopermode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asyncModeWEchoFun;
        static const ydk::Enum::YLeaf asynchModeWOEchoFun;
        static const ydk::Enum::YLeaf demandModeWEchoFunction;
        static const ydk::Enum::YLeaf demandModeWOEchoFunction;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessauthenticationtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf simplePassword;
        static const ydk::Enum::YLeaf keyedMD5;
        static const ydk::Enum::YLeaf meticulousKeyedMD5;
        static const ydk::Enum::YLeaf keyedSHA1;
        static const ydk::Enum::YLeaf meticulousKeyedSHA1;

};

class CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsesstype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf singleHop;
        static const ydk::Enum::YLeaf multiHop;

};


}
}

#endif /* _CISCO_IETF_BFD_MIB_ */

