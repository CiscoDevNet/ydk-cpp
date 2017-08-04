#ifndef _CISCO_IETF_PW_MIB_
#define _CISCO_IETF_PW_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_MIB {

class CiscoIetfPwMib : public ydk::Entity
{
    public:
        CiscoIetfPwMib();
        ~CiscoIetfPwMib();

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

        class Cpwvcobjects; //type: CiscoIetfPwMib::Cpwvcobjects
        class Cpwvctable; //type: CiscoIetfPwMib::Cpwvctable
        class Cpwvcperfcurrenttable; //type: CiscoIetfPwMib::Cpwvcperfcurrenttable
        class Cpwvcperfintervaltable; //type: CiscoIetfPwMib::Cpwvcperfintervaltable
        class Cpwvcperftotaltable; //type: CiscoIetfPwMib::Cpwvcperftotaltable
        class Cpwvcidmappingtable; //type: CiscoIetfPwMib::Cpwvcidmappingtable
        class Cpwvcpeermappingtable; //type: CiscoIetfPwMib::Cpwvcpeermappingtable

        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcidmappingtable> cpwvcidmappingtable;
        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcobjects> cpwvcobjects;
        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcpeermappingtable> cpwvcpeermappingtable;
        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperfcurrenttable> cpwvcperfcurrenttable;
        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperfintervaltable> cpwvcperfintervaltable;
        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperftotaltable> cpwvcperftotaltable;
        std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable> cpwvctable;
        
}; // CiscoIetfPwMib


class CiscoIetfPwMib::Cpwvcobjects : public ydk::Entity
{
    public:
        Cpwvcobjects();
        ~Cpwvcobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcindexnext; //type: uint32
        ydk::YLeaf cpwvcperftotalerrorpackets; //type: uint64
        ydk::YLeaf cpwvcupdownnotifenable; //type: boolean
        ydk::YLeaf cpwvcnotifrate; //type: uint32

}; // CiscoIetfPwMib::Cpwvcobjects


class CiscoIetfPwMib::Cpwvctable : public ydk::Entity
{
    public:
        Cpwvctable();
        ~Cpwvctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcentry; //type: CiscoIetfPwMib::Cpwvctable::Cpwvcentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry> > cpwvcentry;
        
}; // CiscoIetfPwMib::Cpwvctable


class CiscoIetfPwMib::Cpwvctable::Cpwvcentry : public ydk::Entity
{
    public:
        Cpwvcentry();
        ~Cpwvcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcindex; //type: uint32
        ydk::YLeaf cpwvctype; //type: Cpwvctype
        ydk::YLeaf cpwvcowner; //type: Cpwvcowner
        ydk::YLeaf cpwvcpsntype; //type: Cpwvcpsntype
        ydk::YLeaf cpwvcsetuppriority; //type: int32
        ydk::YLeaf cpwvcholdingpriority; //type: int32
        ydk::YLeaf cpwvcinboundmode; //type: Cpwvcinboundmode
        ydk::YLeaf cpwvcpeeraddrtype; //type: Inetaddresstype
        ydk::YLeaf cpwvcpeeraddr; //type: binary
        ydk::YLeaf cpwvcid; //type: uint32
        ydk::YLeaf cpwvclocalgroupid; //type: uint32
        ydk::YLeaf cpwvccontrolword; //type: boolean
        ydk::YLeaf cpwvclocalifmtu; //type: uint32
        ydk::YLeaf cpwvclocalifstring; //type: boolean
        ydk::YLeaf cpwvcremotegroupid; //type: uint32
        ydk::YLeaf cpwvcremotecontrolword; //type: Cpwvcremotecontrolword
        ydk::YLeaf cpwvcremoteifmtu; //type: uint32
        ydk::YLeaf cpwvcremoteifstring; //type: string
        ydk::YLeaf cpwvcoutboundvclabel; //type: uint32
        ydk::YLeaf cpwvcinboundvclabel; //type: uint32
        ydk::YLeaf cpwvcname; //type: string
        ydk::YLeaf cpwvcdescr; //type: string
        ydk::YLeaf cpwvccreatetime; //type: uint32
        ydk::YLeaf cpwvcuptime; //type: uint32
        ydk::YLeaf cpwvcadminstatus; //type: Cpwvcadminstatus
        ydk::YLeaf cpwvcoperstatus; //type: Cpwoperstatus
        ydk::YLeaf cpwvcinboundoperstatus; //type: Cpwoperstatus
        ydk::YLeaf cpwvcoutboundoperstatus; //type: Cpwoperstatus
        ydk::YLeaf cpwvctimeelapsed; //type: int32
        ydk::YLeaf cpwvcvalidintervals; //type: int32
        ydk::YLeaf cpwvcrowstatus; //type: Rowstatus
        ydk::YLeaf cpwvcstoragetype; //type: Storagetype
        class Cpwvcowner;
        class Cpwvcpsntype;
        class Cpwvcinboundmode;
        class Cpwvcremotecontrolword;
        class Cpwvcadminstatus;

}; // CiscoIetfPwMib::Cpwvctable::Cpwvcentry


class CiscoIetfPwMib::Cpwvcperfcurrenttable : public ydk::Entity
{
    public:
        Cpwvcperfcurrenttable();
        ~Cpwvcperfcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcperfcurrententry; //type: CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry> > cpwvcperfcurrententry;
        
}; // CiscoIetfPwMib::Cpwvcperfcurrenttable


class CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry : public ydk::Entity
{
    public:
        Cpwvcperfcurrententry();
        ~Cpwvcperfcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcperfcurrentinhcpackets; //type: uint64
        ydk::YLeaf cpwvcperfcurrentinhcbytes; //type: uint64
        ydk::YLeaf cpwvcperfcurrentouthcpackets; //type: uint64
        ydk::YLeaf cpwvcperfcurrentouthcbytes; //type: uint64

}; // CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry


class CiscoIetfPwMib::Cpwvcperfintervaltable : public ydk::Entity
{
    public:
        Cpwvcperfintervaltable();
        ~Cpwvcperfintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcperfintervalentry; //type: CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry> > cpwvcperfintervalentry;
        
}; // CiscoIetfPwMib::Cpwvcperfintervaltable


class CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry : public ydk::Entity
{
    public:
        Cpwvcperfintervalentry();
        ~Cpwvcperfintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcperfintervalnumber; //type: int32
        ydk::YLeaf cpwvcperfintervalvaliddata; //type: boolean
        ydk::YLeaf cpwvcperfintervaltimeelapsed; //type: int32
        ydk::YLeaf cpwvcperfintervalinhcpackets; //type: uint64
        ydk::YLeaf cpwvcperfintervalinhcbytes; //type: uint64
        ydk::YLeaf cpwvcperfintervalouthcpackets; //type: uint64
        ydk::YLeaf cpwvcperfintervalouthcbytes; //type: uint64

}; // CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry


class CiscoIetfPwMib::Cpwvcperftotaltable : public ydk::Entity
{
    public:
        Cpwvcperftotaltable();
        ~Cpwvcperftotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcperftotalentry; //type: CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry> > cpwvcperftotalentry;
        
}; // CiscoIetfPwMib::Cpwvcperftotaltable


class CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry : public ydk::Entity
{
    public:
        Cpwvcperftotalentry();
        ~Cpwvcperftotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        ydk::YLeaf cpwvcindex;
        ydk::YLeaf cpwvcperftotalinhcpackets; //type: uint64
        ydk::YLeaf cpwvcperftotalinhcbytes; //type: uint64
        ydk::YLeaf cpwvcperftotalouthcpackets; //type: uint64
        ydk::YLeaf cpwvcperftotalouthcbytes; //type: uint64
        ydk::YLeaf cpwvcperftotaldiscontinuitytime; //type: uint32

}; // CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry


class CiscoIetfPwMib::Cpwvcidmappingtable : public ydk::Entity
{
    public:
        Cpwvcidmappingtable();
        ~Cpwvcidmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcidmappingentry; //type: CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry> > cpwvcidmappingentry;
        
}; // CiscoIetfPwMib::Cpwvcidmappingtable


class CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry : public ydk::Entity
{
    public:
        Cpwvcidmappingentry();
        ~Cpwvcidmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcidmappingvctype; //type: Cpwvctype
        ydk::YLeaf cpwvcidmappingvcid; //type: uint32
        ydk::YLeaf cpwvcidmappingpeeraddrtype; //type: Inetaddresstype
        ydk::YLeaf cpwvcidmappingpeeraddr; //type: binary
        ydk::YLeaf cpwvcidmappingvcindex; //type: uint32

}; // CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry


class CiscoIetfPwMib::Cpwvcpeermappingtable : public ydk::Entity
{
    public:
        Cpwvcpeermappingtable();
        ~Cpwvcpeermappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcpeermappingentry; //type: CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry> > cpwvcpeermappingentry;
        
}; // CiscoIetfPwMib::Cpwvcpeermappingtable


class CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry : public ydk::Entity
{
    public:
        Cpwvcpeermappingentry();
        ~Cpwvcpeermappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcpeermappingpeeraddrtype; //type: Inetaddresstype
        ydk::YLeaf cpwvcpeermappingpeeraddr; //type: binary
        ydk::YLeaf cpwvcpeermappingvctype; //type: Cpwvctype
        ydk::YLeaf cpwvcpeermappingvcid; //type: uint32
        ydk::YLeaf cpwvcpeermappingvcindex; //type: uint32

}; // CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::Cpwvcowner : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf maintenanceProtocol;
        static const ydk::Enum::YLeaf other;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::Cpwvcpsntype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mplsOverIp;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf other;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::Cpwvcinboundmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf loose;
        static const ydk::Enum::YLeaf strict;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::Cpwvcremotecontrolword : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf noControlWord;
        static const ydk::Enum::YLeaf withControlWord;
        static const ydk::Enum::YLeaf notYetKnown;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::Cpwvcadminstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf testing;

};


}
}

#endif /* _CISCO_IETF_PW_MIB_ */
