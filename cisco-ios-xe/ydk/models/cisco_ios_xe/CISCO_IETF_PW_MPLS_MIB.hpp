#ifndef _CISCO_IETF_PW_MPLS_MIB_
#define _CISCO_IETF_PW_MPLS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_PW_MPLS_MIB {

class CiscoIetfPwMplsMib : public ydk::Entity
{
    public:
        CiscoIetfPwMplsMib();
        ~CiscoIetfPwMplsMib();

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


class CiscoIetfPwMplsMib::Cpwvcmplsobjects : public ydk::Entity
{
    public:
        Cpwvcmplsobjects();
        ~Cpwvcmplsobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcmplsoutboundindexnext; //type: uint32
        ydk::YLeaf cpwvcmplsinboundindexnext; //type: uint32

}; // CiscoIetfPwMplsMib::Cpwvcmplsobjects


class CiscoIetfPwMplsMib::Cpwvcmplstable : public ydk::Entity
{
    public:
        Cpwvcmplstable();
        ~Cpwvcmplstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcmplsentry; //type: CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry> > cpwvcmplsentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplstable


class CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry : public ydk::Entity
{
    public:
        Cpwvcmplsentry();
        ~Cpwvcmplsentry();

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
        ydk::YLeaf cpwvcmplsmplstype; //type: Cpwvcmplsmplstype
        ydk::YLeaf cpwvcmplsexpbitsmode; //type: Cpwvcmplsexpbitsmode
        ydk::YLeaf cpwvcmplsexpbits; //type: uint32
        ydk::YLeaf cpwvcmplsttl; //type: uint32
        ydk::YLeaf cpwvcmplslocalldpid; //type: string
        ydk::YLeaf cpwvcmplslocalldpentityid; //type: uint32
        ydk::YLeaf cpwvcmplspeerldpid; //type: string
        ydk::YLeaf cpwvcmplsstoragetype; //type: Storagetype
        class Cpwvcmplsexpbitsmode;

}; // CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry


class CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable : public ydk::Entity
{
    public:
        Cpwvcmplsoutboundtable();
        ~Cpwvcmplsoutboundtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcmplsoutboundentry; //type: CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry> > cpwvcmplsoutboundentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable


class CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry : public ydk::Entity
{
    public:
        Cpwvcmplsoutboundentry();
        ~Cpwvcmplsoutboundentry();

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
        ydk::YLeaf cpwvcmplsoutboundindex; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundlsrxcindex; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundtunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundtunnelinstance; //type: uint32
        ydk::YLeaf cpwvcmplsoutboundtunnellcllsr; //type: binary
        ydk::YLeaf cpwvcmplsoutboundtunnelpeerlsr; //type: binary
        ydk::YLeaf cpwvcmplsoutboundifindex; //type: int32
        ydk::YLeaf cpwvcmplsoutboundrowstatus; //type: Rowstatus
        ydk::YLeaf cpwvcmplsoutboundstoragetype; //type: Storagetype

}; // CiscoIetfPwMplsMib::Cpwvcmplsoutboundtable::Cpwvcmplsoutboundentry


class CiscoIetfPwMplsMib::Cpwvcmplsinboundtable : public ydk::Entity
{
    public:
        Cpwvcmplsinboundtable();
        ~Cpwvcmplsinboundtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcmplsinboundentry; //type: CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry> > cpwvcmplsinboundentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplsinboundtable


class CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry : public ydk::Entity
{
    public:
        Cpwvcmplsinboundentry();
        ~Cpwvcmplsinboundentry();

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
        ydk::YLeaf cpwvcmplsinboundindex; //type: uint32
        ydk::YLeaf cpwvcmplsinboundlsrxcindex; //type: uint32
        ydk::YLeaf cpwvcmplsinboundtunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplsinboundtunnelinstance; //type: uint32
        ydk::YLeaf cpwvcmplsinboundtunnellcllsr; //type: binary
        ydk::YLeaf cpwvcmplsinboundtunnelpeerlsr; //type: binary
        ydk::YLeaf cpwvcmplsinboundifindex; //type: int32
        ydk::YLeaf cpwvcmplsinboundrowstatus; //type: Rowstatus
        ydk::YLeaf cpwvcmplsinboundstoragetype; //type: Storagetype

}; // CiscoIetfPwMplsMib::Cpwvcmplsinboundtable::Cpwvcmplsinboundentry


class CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable : public ydk::Entity
{
    public:
        Cpwvcmplsnontemappingtable();
        ~Cpwvcmplsnontemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcmplsnontemappingentry; //type: CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry> > cpwvcmplsnontemappingentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable


class CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry : public ydk::Entity
{
    public:
        Cpwvcmplsnontemappingentry();
        ~Cpwvcmplsnontemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcmplsnontemappingtunneldirection; //type: Cpwvcmplsnontemappingtunneldirection
        ydk::YLeaf cpwvcmplsnontemappingxctunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplsnontemappingifindex; //type: int32
        ydk::YLeaf cpwvcmplsnontemappingvcindex; //type: uint32
        class Cpwvcmplsnontemappingtunneldirection;

}; // CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry


class CiscoIetfPwMplsMib::Cpwvcmplstemappingtable : public ydk::Entity
{
    public:
        Cpwvcmplstemappingtable();
        ~Cpwvcmplstemappingtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cpwvcmplstemappingentry; //type: CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry

        std::vector<std::shared_ptr<CISCO_IETF_PW_MPLS_MIB::CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry> > cpwvcmplstemappingentry;
        
}; // CiscoIetfPwMplsMib::Cpwvcmplstemappingtable


class CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry : public ydk::Entity
{
    public:
        Cpwvcmplstemappingentry();
        ~Cpwvcmplstemappingentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpwvcmplstemappingtunneldirection; //type: Cpwvcmplstemappingtunneldirection
        ydk::YLeaf cpwvcmplstemappingtunnelindex; //type: uint32
        ydk::YLeaf cpwvcmplstemappingtunnelinstance; //type: uint32
        ydk::YLeaf cpwvcmplstemappingtunnelpeerlsrid; //type: binary
        ydk::YLeaf cpwvcmplstemappingtunnellocallsrid; //type: binary
        ydk::YLeaf cpwvcmplstemappingvcindex; //type: uint32
        class Cpwvcmplstemappingtunneldirection;

}; // CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry

class CiscoIetfPwMplsMib::Cpwvcmplstable::Cpwvcmplsentry::Cpwvcmplsexpbitsmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf outerTunnel;
        static const ydk::Enum::YLeaf specifiedValue;
        static const ydk::Enum::YLeaf serviceDependant;

};

class CiscoIetfPwMplsMib::Cpwvcmplsnontemappingtable::Cpwvcmplsnontemappingentry::Cpwvcmplsnontemappingtunneldirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf outbound;
        static const ydk::Enum::YLeaf inbound;

};

class CiscoIetfPwMplsMib::Cpwvcmplstemappingtable::Cpwvcmplstemappingentry::Cpwvcmplstemappingtunneldirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf outbound;
        static const ydk::Enum::YLeaf inbound;

};


}
}

#endif /* _CISCO_IETF_PW_MPLS_MIB_ */

