#ifndef _CISCO_IETF_PW_MIB_
#define _CISCO_IETF_PW_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_PW_MIB {

class CiscoIetfPwMib : public Entity
{
    public:
        CiscoIetfPwMib();
        ~CiscoIetfPwMib();

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


class CiscoIetfPwMib::Cpwvcobjects : public Entity
{
    public:
        Cpwvcobjects();
        ~Cpwvcobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcindexnext; //type: uint32
        YLeaf cpwvcperftotalerrorpackets; //type: uint64
        YLeaf cpwvcupdownnotifenable; //type: boolean
        YLeaf cpwvcnotifrate; //type: uint32

}; // CiscoIetfPwMib::Cpwvcobjects


class CiscoIetfPwMib::Cpwvctable : public Entity
{
    public:
        Cpwvctable();
        ~Cpwvctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcentry; //type: CiscoIetfPwMib::Cpwvctable::Cpwvcentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry> > cpwvcentry;
        
}; // CiscoIetfPwMib::Cpwvctable


class CiscoIetfPwMib::Cpwvctable::Cpwvcentry : public Entity
{
    public:
        Cpwvcentry();
        ~Cpwvcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcindex; //type: uint32
        YLeaf cpwvctype; //type: CpwvctypeEnum
        YLeaf cpwvcowner; //type: CpwvcownerEnum
        YLeaf cpwvcpsntype; //type: CpwvcpsntypeEnum
        YLeaf cpwvcsetuppriority; //type: int32
        YLeaf cpwvcholdingpriority; //type: int32
        YLeaf cpwvcinboundmode; //type: CpwvcinboundmodeEnum
        YLeaf cpwvcpeeraddrtype; //type: InetaddresstypeEnum
        YLeaf cpwvcpeeraddr; //type: binary
        YLeaf cpwvcid; //type: uint32
        YLeaf cpwvclocalgroupid; //type: uint32
        YLeaf cpwvccontrolword; //type: boolean
        YLeaf cpwvclocalifmtu; //type: uint32
        YLeaf cpwvclocalifstring; //type: boolean
        YLeaf cpwvcremotegroupid; //type: uint32
        YLeaf cpwvcremotecontrolword; //type: CpwvcremotecontrolwordEnum
        YLeaf cpwvcremoteifmtu; //type: uint32
        YLeaf cpwvcremoteifstring; //type: string
        YLeaf cpwvcoutboundvclabel; //type: uint32
        YLeaf cpwvcinboundvclabel; //type: uint32
        YLeaf cpwvcname; //type: string
        YLeaf cpwvcdescr; //type: string
        YLeaf cpwvccreatetime; //type: uint32
        YLeaf cpwvcuptime; //type: uint32
        YLeaf cpwvcadminstatus; //type: CpwvcadminstatusEnum
        YLeaf cpwvcoperstatus; //type: CpwoperstatusEnum
        YLeaf cpwvcinboundoperstatus; //type: CpwoperstatusEnum
        YLeaf cpwvcoutboundoperstatus; //type: CpwoperstatusEnum
        YLeaf cpwvctimeelapsed; //type: int32
        YLeaf cpwvcvalidintervals; //type: int32
        YLeaf cpwvcrowstatus; //type: RowstatusEnum
        YLeaf cpwvcstoragetype; //type: StoragetypeEnum
        class CpwvcownerEnum;
        class CpwvcpsntypeEnum;
        class CpwvcinboundmodeEnum;
        class CpwvcremotecontrolwordEnum;
        class CpwvcadminstatusEnum;

}; // CiscoIetfPwMib::Cpwvctable::Cpwvcentry


class CiscoIetfPwMib::Cpwvcperfcurrenttable : public Entity
{
    public:
        Cpwvcperfcurrenttable();
        ~Cpwvcperfcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcperfcurrententry; //type: CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry> > cpwvcperfcurrententry;
        
}; // CiscoIetfPwMib::Cpwvcperfcurrenttable


class CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry : public Entity
{
    public:
        Cpwvcperfcurrententry();
        ~Cpwvcperfcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcperfcurrentinhcpackets; //type: uint64
        YLeaf cpwvcperfcurrentinhcbytes; //type: uint64
        YLeaf cpwvcperfcurrentouthcpackets; //type: uint64
        YLeaf cpwvcperfcurrentouthcbytes; //type: uint64

}; // CiscoIetfPwMib::Cpwvcperfcurrenttable::Cpwvcperfcurrententry


class CiscoIetfPwMib::Cpwvcperfintervaltable : public Entity
{
    public:
        Cpwvcperfintervaltable();
        ~Cpwvcperfintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcperfintervalentry; //type: CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry> > cpwvcperfintervalentry;
        
}; // CiscoIetfPwMib::Cpwvcperfintervaltable


class CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry : public Entity
{
    public:
        Cpwvcperfintervalentry();
        ~Cpwvcperfintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcperfintervalnumber; //type: int32
        YLeaf cpwvcperfintervalvaliddata; //type: boolean
        YLeaf cpwvcperfintervaltimeelapsed; //type: int32
        YLeaf cpwvcperfintervalinhcpackets; //type: uint64
        YLeaf cpwvcperfintervalinhcbytes; //type: uint64
        YLeaf cpwvcperfintervalouthcpackets; //type: uint64
        YLeaf cpwvcperfintervalouthcbytes; //type: uint64

}; // CiscoIetfPwMib::Cpwvcperfintervaltable::Cpwvcperfintervalentry


class CiscoIetfPwMib::Cpwvcperftotaltable : public Entity
{
    public:
        Cpwvcperftotaltable();
        ~Cpwvcperftotaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcperftotalentry; //type: CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry> > cpwvcperftotalentry;
        
}; // CiscoIetfPwMib::Cpwvcperftotaltable


class CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry : public Entity
{
    public:
        Cpwvcperftotalentry();
        ~Cpwvcperftotalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcperftotalinhcpackets; //type: uint64
        YLeaf cpwvcperftotalinhcbytes; //type: uint64
        YLeaf cpwvcperftotalouthcpackets; //type: uint64
        YLeaf cpwvcperftotalouthcbytes; //type: uint64
        YLeaf cpwvcperftotaldiscontinuitytime; //type: uint32

}; // CiscoIetfPwMib::Cpwvcperftotaltable::Cpwvcperftotalentry


class CiscoIetfPwMib::Cpwvcidmappingtable : public Entity
{
    public:
        Cpwvcidmappingtable();
        ~Cpwvcidmappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcidmappingentry; //type: CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry> > cpwvcidmappingentry;
        
}; // CiscoIetfPwMib::Cpwvcidmappingtable


class CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry : public Entity
{
    public:
        Cpwvcidmappingentry();
        ~Cpwvcidmappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcidmappingvctype; //type: CpwvctypeEnum
        YLeaf cpwvcidmappingvcid; //type: uint32
        YLeaf cpwvcidmappingpeeraddrtype; //type: InetaddresstypeEnum
        YLeaf cpwvcidmappingpeeraddr; //type: binary
        YLeaf cpwvcidmappingvcindex; //type: uint32

}; // CiscoIetfPwMib::Cpwvcidmappingtable::Cpwvcidmappingentry


class CiscoIetfPwMib::Cpwvcpeermappingtable : public Entity
{
    public:
        Cpwvcpeermappingtable();
        ~Cpwvcpeermappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcpeermappingentry; //type: CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry> > cpwvcpeermappingentry;
        
}; // CiscoIetfPwMib::Cpwvcpeermappingtable


class CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry : public Entity
{
    public:
        Cpwvcpeermappingentry();
        ~Cpwvcpeermappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcpeermappingpeeraddrtype; //type: InetaddresstypeEnum
        YLeaf cpwvcpeermappingpeeraddr; //type: binary
        YLeaf cpwvcpeermappingvctype; //type: CpwvctypeEnum
        YLeaf cpwvcpeermappingvcid; //type: uint32
        YLeaf cpwvcpeermappingvcindex; //type: uint32

}; // CiscoIetfPwMib::Cpwvcpeermappingtable::Cpwvcpeermappingentry

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcownerEnum : public Enum
{
    public:
        static const Enum::YLeaf manual;
        static const Enum::YLeaf maintenanceProtocol;
        static const Enum::YLeaf other;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcpsntypeEnum : public Enum
{
    public:
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf mplsOverIp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf other;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcinboundmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf loose;
        static const Enum::YLeaf strict;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcremotecontrolwordEnum : public Enum
{
    public:
        static const Enum::YLeaf noControlWord;
        static const Enum::YLeaf withControlWord;
        static const Enum::YLeaf notYetKnown;

};

class CiscoIetfPwMib::Cpwvctable::Cpwvcentry::CpwvcadminstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf testing;

};


}
}

#endif /* _CISCO_IETF_PW_MIB_ */

