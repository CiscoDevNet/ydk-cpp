#ifndef _CISCO_IETF_PW_MPLS_MIB_
#define _CISCO_IETF_PW_MPLS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_PW_MPLS_MIB {

class CiscoIetfPwMplsMib : public Entity
{
    public:
        CiscoIetfPwMplsMib();
        ~CiscoIetfPwMplsMib();

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

        class Cpwvcmplsobjects; //type: CiscoIetfPwMplsMib::Cpwvcmplsobjects
        class Cpwvcmplstable; //type: CiscoIetfPwMplsMib::Cpwvcmplstable
        class Cpwvcmplsoutboundtable; //type: CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable
        class Cpwvcmplsinboundtable; //type: CiscoIetfPwMplsMib::Cpwvcmplsinboundtable
        class Cpwvcmplsnontemappingtable; //type: CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable
        class Cpwvcmplstemappingtable; //type: CiscoIetfPwMplsMib::Cpwvcmplstemappingtable

        std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsinboundtable> cpwvcmplsinboundtable;
        std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable> cpwvcmplsnontemappingtable;
        std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsobjects> cpwvcmplsobjects;
        std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable> cpwvcmplsoutboundtable;
        std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplstable> cpwvcmplstable;
        std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplstemappingtable> cpwvcmplstemappingtable;
        
}; // CiscoIetfPwMplsMib


class CiscoIetfPwMplsMib::Cpwvcmplsobjects : public Entity
{
    public:
        Cpwvcmplsobjects();
        ~Cpwvcmplsobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcmplsoutboundindexnext; //type: uint32
        YLeaf cpwvcmplsinboundindexnext; //type: uint32

}; // CiscoIetfPwMplsMib::Cpwvcmplsobjects


class CiscoIetfPwMplsMib::Cpwvcmplstable : public Entity
{
    public:
        Cpwvcmplstable();
        ~Cpwvcmplstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcmplsentry; //type: CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry> > cpwvcmplsentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplstable


class CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry : public Entity
{
    public:
        Cpwvcmplsentry();
        ~Cpwvcmplsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcmplsmplstype; //type: Cpwvcmplsmplstype
        YLeaf cpwvcmplsexpbitsmode; //type: CpwvcmplsexpbitsmodeEnum
        YLeaf cpwvcmplsexpbits; //type: uint32
        YLeaf cpwvcmplsttl; //type: uint32
        YLeaf cpwvcmplslocalldpid; //type: string
        YLeaf cpwvcmplslocalldpentityid; //type: uint32
        YLeaf cpwvcmplspeerldpid; //type: string
        YLeaf cpwvcmplsstoragetype; //type: StoragetypeEnum
        class CpwvcmplsexpbitsmodeEnum;

}; // CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry


class CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable : public Entity
{
    public:
        Cpwvcmplsoutboundtable();
        ~Cpwvcmplsoutboundtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcmplsoutboundentry; //type: CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry> > cpwvcmplsoutboundentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable


class CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry : public Entity
{
    public:
        Cpwvcmplsoutboundentry();
        ~Cpwvcmplsoutboundentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcmplsoutboundindex; //type: uint32
        YLeaf cpwvcmplsoutboundlsrxcindex; //type: uint32
        YLeaf cpwvcmplsoutboundtunnelindex; //type: uint32
        YLeaf cpwvcmplsoutboundtunnelinstance; //type: uint32
        YLeaf cpwvcmplsoutboundtunnellcllsr; //type: binary
        YLeaf cpwvcmplsoutboundtunnelpeerlsr; //type: binary
        YLeaf cpwvcmplsoutboundifindex; //type: int32
        YLeaf cpwvcmplsoutboundrowstatus; //type: RowstatusEnum
        YLeaf cpwvcmplsoutboundstoragetype; //type: StoragetypeEnum

}; // CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry


class CiscoIetfPwMplsMib::Cpwvcmplsinboundtable : public Entity
{
    public:
        Cpwvcmplsinboundtable();
        ~Cpwvcmplsinboundtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcmplsinboundentry; //type: CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry> > cpwvcmplsinboundentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplsinboundtable


class CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry : public Entity
{
    public:
        Cpwvcmplsinboundentry();
        ~Cpwvcmplsinboundentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: uint32 (refers to CISCO_IETF_PW_MIB::CiscoIetfPwMib::Cpwvctable::Cpwvcentry::cpwvcindex)
        YLeaf cpwvcindex;
        YLeaf cpwvcmplsinboundindex; //type: uint32
        YLeaf cpwvcmplsinboundlsrxcindex; //type: uint32
        YLeaf cpwvcmplsinboundtunnelindex; //type: uint32
        YLeaf cpwvcmplsinboundtunnelinstance; //type: uint32
        YLeaf cpwvcmplsinboundtunnellcllsr; //type: binary
        YLeaf cpwvcmplsinboundtunnelpeerlsr; //type: binary
        YLeaf cpwvcmplsinboundifindex; //type: int32
        YLeaf cpwvcmplsinboundrowstatus; //type: RowstatusEnum
        YLeaf cpwvcmplsinboundstoragetype; //type: StoragetypeEnum

}; // CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry


class CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable : public Entity
{
    public:
        Cpwvcmplsnontemappingtable();
        ~Cpwvcmplsnontemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcmplsnontemappingentry; //type: CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry> > cpwvcmplsnontemappingentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable


class CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry : public Entity
{
    public:
        Cpwvcmplsnontemappingentry();
        ~Cpwvcmplsnontemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcmplsnontemappingtunneldirection; //type: CpwvcmplsnontemappingtunneldirectionEnum
        YLeaf cpwvcmplsnontemappingxctunnelindex; //type: uint32
        YLeaf cpwvcmplsnontemappingifindex; //type: int32
        YLeaf cpwvcmplsnontemappingvcindex; //type: uint32
        class CpwvcmplsnontemappingtunneldirectionEnum;

}; // CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry


class CiscoIetfPwMplsMib::Cpwvcmplstemappingtable : public Entity
{
    public:
        Cpwvcmplstemappingtable();
        ~Cpwvcmplstemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpwvcmplstemappingentry; //type: CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry> > cpwvcmplstemappingentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplstemappingtable


class CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry : public Entity
{
    public:
        Cpwvcmplstemappingentry();
        ~Cpwvcmplstemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpwvcmplstemappingtunneldirection; //type: CpwvcmplstemappingtunneldirectionEnum
        YLeaf cpwvcmplstemappingtunnelindex; //type: uint32
        YLeaf cpwvcmplstemappingtunnelinstance; //type: uint32
        YLeaf cpwvcmplstemappingtunnelpeerlsrid; //type: binary
        YLeaf cpwvcmplstemappingtunnellocallsrid; //type: binary
        YLeaf cpwvcmplstemappingvcindex; //type: uint32
        class CpwvcmplstemappingtunneldirectionEnum;

}; // CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry

class CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::CpwvcmplsexpbitsmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf outerTunnel;
        static const Enum::YLeaf specifiedValue;
        static const Enum::YLeaf serviceDependant;

};

class CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::CpwvcmplsnontemappingtunneldirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf outbound;
        static const Enum::YLeaf inbound;

};

class CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::CpwvcmplstemappingtunneldirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf outbound;
        static const Enum::YLeaf inbound;

};


}
}

#endif /* _CISCO_IETF_PW_MPLS_MIB_ */

