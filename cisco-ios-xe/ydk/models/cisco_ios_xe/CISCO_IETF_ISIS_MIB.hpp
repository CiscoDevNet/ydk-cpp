#ifndef _CISCO_IETF_ISIS_MIB_
#define _CISCO_IETF_ISIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IETF_ISIS_MIB {

class CiscoIetfIsisMib : public ydk::Entity
{
    public:
        CiscoIetfIsisMib();
        ~CiscoIetfIsisMib();

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

        class Ciisysobject; //type: CiscoIetfIsisMib::Ciisysobject
        class Ciicirc; //type: CiscoIetfIsisMib::Ciicirc
        class Ciimanareaaddrtable; //type: CiscoIetfIsisMib::Ciimanareaaddrtable
        class Ciiareaaddrtable; //type: CiscoIetfIsisMib::Ciiareaaddrtable
        class Ciisysprotsupptable; //type: CiscoIetfIsisMib::Ciisysprotsupptable
        class Ciisummaddrtable; //type: CiscoIetfIsisMib::Ciisummaddrtable
        class Ciiredistributeaddrtable; //type: CiscoIetfIsisMib::Ciiredistributeaddrtable
        class Ciiroutertable; //type: CiscoIetfIsisMib::Ciiroutertable
        class Ciisysleveltable; //type: CiscoIetfIsisMib::Ciisysleveltable
        class Ciicirctable; //type: CiscoIetfIsisMib::Ciicirctable
        class Ciicircleveltable; //type: CiscoIetfIsisMib::Ciicircleveltable
        class Ciisystemcountertable; //type: CiscoIetfIsisMib::Ciisystemcountertable
        class Ciicircuitcountertable; //type: CiscoIetfIsisMib::Ciicircuitcountertable
        class Ciipacketcountertable; //type: CiscoIetfIsisMib::Ciipacketcountertable
        class Ciiisadjtable; //type: CiscoIetfIsisMib::Ciiisadjtable
        class Ciiisadjareaaddrtable; //type: CiscoIetfIsisMib::Ciiisadjareaaddrtable
        class Ciiisadjipaddrtable; //type: CiscoIetfIsisMib::Ciiisadjipaddrtable
        class Ciiisadjprotsupptable; //type: CiscoIetfIsisMib::Ciiisadjprotsupptable
        class Ciiratable; //type: CiscoIetfIsisMib::Ciiratable
        class Ciiipratable; //type: CiscoIetfIsisMib::Ciiipratable
        class Ciilspsummarytable; //type: CiscoIetfIsisMib::Ciilspsummarytable
        class Ciilsptlvtable; //type: CiscoIetfIsisMib::Ciilsptlvtable

        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiareaaddrtable> ciiareaaddrtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirc> ciicirc;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicircleveltable> ciicircleveltable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable> ciicirctable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicircuitcountertable> ciicircuitcountertable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiipratable> ciiipratable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjareaaddrtable> ciiisadjareaaddrtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjipaddrtable> ciiisadjipaddrtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjprotsupptable> ciiisadjprotsupptable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable> ciiisadjtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilspsummarytable> ciilspsummarytable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilsptlvtable> ciilsptlvtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciimanareaaddrtable> ciimanareaaddrtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciipacketcountertable> ciipacketcountertable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiratable> ciiratable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiredistributeaddrtable> ciiredistributeaddrtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiroutertable> ciiroutertable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisummaddrtable> ciisummaddrtable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysleveltable> ciisysleveltable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysobject> ciisysobject;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysprotsupptable> ciisysprotsupptable;
        std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisystemcountertable> ciisystemcountertable;
        
}; // CiscoIetfIsisMib


class CiscoIetfIsisMib::Ciisysobject : public ydk::Entity
{
    public:
        Ciisysobject();
        ~Ciisysobject();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciisysversion; //type: Ciisysversion
        ydk::YLeaf ciisystype; //type: Ciisystype
        ydk::YLeaf ciisysid; //type: binary
        ydk::YLeaf ciisysmaxpathsplits; //type: int32
        ydk::YLeaf ciisysmaxlspgenint; //type: int32
        ydk::YLeaf ciisyspolleshellorate; //type: uint32
        ydk::YLeaf ciisyswaittime; //type: uint32
        ydk::YLeaf ciisysadminstate; //type: Ciiadminstate
        ydk::YLeaf ciisysl2tol1leaking; //type: boolean
        ydk::YLeaf ciisysmaxage; //type: uint32
        ydk::YLeaf ciisysreceivelspbuffersize; //type: uint32
        class Ciisysversion;
        class Ciisystype;

}; // CiscoIetfIsisMib::Ciisysobject


class CiscoIetfIsisMib::Ciicirc : public ydk::Entity
{
    public:
        Ciicirc();
        ~Ciicirc();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciinextcircindex; //type: uint32

}; // CiscoIetfIsisMib::Ciicirc


class CiscoIetfIsisMib::Ciimanareaaddrtable : public ydk::Entity
{
    public:
        Ciimanareaaddrtable();
        ~Ciimanareaaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciimanareaaddrentry; //type: CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry> > ciimanareaaddrentry;
        
}; // CiscoIetfIsisMib::Ciimanareaaddrtable


class CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry : public ydk::Entity
{
    public:
        Ciimanareaaddrentry();
        ~Ciimanareaaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciimanareaaddr; //type: binary
        ydk::YLeaf ciimanareaaddrexiststate; //type: Rowstatus

}; // CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry


class CiscoIetfIsisMib::Ciiareaaddrtable : public ydk::Entity
{
    public:
        Ciiareaaddrtable();
        ~Ciiareaaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiareaaddrentry; //type: CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry> > ciiareaaddrentry;
        
}; // CiscoIetfIsisMib::Ciiareaaddrtable


class CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry : public ydk::Entity
{
    public:
        Ciiareaaddrentry();
        ~Ciiareaaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciiareaaddr; //type: binary

}; // CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry


class CiscoIetfIsisMib::Ciisysprotsupptable : public ydk::Entity
{
    public:
        Ciisysprotsupptable();
        ~Ciisysprotsupptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciisysprotsuppentry; //type: CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry> > ciisysprotsuppentry;
        
}; // CiscoIetfIsisMib::Ciisysprotsupptable


class CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry : public ydk::Entity
{
    public:
        Ciisysprotsuppentry();
        ~Ciisysprotsuppentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciisysprotsuppprotocol; //type: Ciisupportedprotocol
        ydk::YLeaf ciisysprotsuppexiststate; //type: Rowstatus

}; // CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry


class CiscoIetfIsisMib::Ciisummaddrtable : public ydk::Entity
{
    public:
        Ciisummaddrtable();
        ~Ciisummaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciisummaddrentry; //type: CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry> > ciisummaddrentry;
        
}; // CiscoIetfIsisMib::Ciisummaddrtable


class CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry : public ydk::Entity
{
    public:
        Ciisummaddrentry();
        ~Ciisummaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciisummaddresstype; //type: Inetaddresstype
        ydk::YLeaf ciisummaddress; //type: binary
        ydk::YLeaf ciisummaddrprefixlen; //type: uint32
        ydk::YLeaf ciisummaddrexiststate; //type: Rowstatus
        ydk::YLeaf ciisummaddrmetric; //type: int32
        ydk::YLeaf ciisummaddrfullmetric; //type: uint32

}; // CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry


class CiscoIetfIsisMib::Ciiredistributeaddrtable : public ydk::Entity
{
    public:
        Ciiredistributeaddrtable();
        ~Ciiredistributeaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiredistributeaddrentry; //type: CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry> > ciiredistributeaddrentry;
        
}; // CiscoIetfIsisMib::Ciiredistributeaddrtable


class CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry : public ydk::Entity
{
    public:
        Ciiredistributeaddrentry();
        ~Ciiredistributeaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciiredistributeaddrtype; //type: Inetaddresstype
        ydk::YLeaf ciiredistributeaddraddress; //type: binary
        ydk::YLeaf ciiredistributeaddrprefixlen; //type: uint32
        ydk::YLeaf ciiredistributeaddrexiststate; //type: Rowstatus

}; // CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry


class CiscoIetfIsisMib::Ciiroutertable : public ydk::Entity
{
    public:
        Ciiroutertable();
        ~Ciiroutertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciirouterentry; //type: CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry> > ciirouterentry;
        
}; // CiscoIetfIsisMib::Ciiroutertable


class CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry : public ydk::Entity
{
    public:
        Ciirouterentry();
        ~Ciirouterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciiroutersysid; //type: binary
        ydk::YLeaf ciirouterlevel; //type: Ciiislevel
        ydk::YLeaf ciirouterhostname; //type: string
        ydk::YLeaf ciirouterid; //type: uint32

}; // CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry


class CiscoIetfIsisMib::Ciisysleveltable : public ydk::Entity
{
    public:
        Ciisysleveltable();
        ~Ciisysleveltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciisyslevelentry; //type: CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry> > ciisyslevelentry;
        
}; // CiscoIetfIsisMib::Ciisysleveltable


class CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry : public ydk::Entity
{
    public:
        Ciisyslevelentry();
        ~Ciisyslevelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciisyslevelindex; //type: Ciisyslevelindex
        ydk::YLeaf ciisysleveloriglspbuffsize; //type: int32
        ydk::YLeaf ciisyslevelminlspgenint; //type: uint32
        ydk::YLeaf ciisysleveloverloadstate; //type: Ciilevelstate
        ydk::YLeaf ciisyslevelsetoverload; //type: boolean
        ydk::YLeaf ciisyslevelsetoverloaduntil; //type: uint32
        ydk::YLeaf ciisyslevelmetricstyle; //type: Ciimetricstyle
        ydk::YLeaf ciisyslevelspfconsiders; //type: Ciimetricstyle
        ydk::YLeaf ciisyslevelteenabled; //type: boolean
        class Ciisyslevelindex;

}; // CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry


class CiscoIetfIsisMib::Ciicirctable : public ydk::Entity
{
    public:
        Ciicirctable();
        ~Ciicirctable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciicircentry; //type: CiscoIetfIsisMib::Ciicirctable::Ciicircentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry> > ciicircentry;
        
}; // CiscoIetfIsisMib::Ciicirctable


class CiscoIetfIsisMib::Ciicirctable::Ciicircentry : public ydk::Entity
{
    public:
        Ciicircentry();
        ~Ciicircentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciicircindex; //type: int32
        ydk::YLeaf ciicircifindex; //type: int32
        ydk::YLeaf ciicircifsubindex; //type: int32
        ydk::YLeaf ciicircadminstate; //type: Ciiadminstate
        ydk::YLeaf ciicircexiststate; //type: Rowstatus
        ydk::YLeaf ciicirctype; //type: Ciicirctype
        ydk::YLeaf ciicircextdomain; //type: boolean
        ydk::YLeaf ciicirclevel; //type: Ciicirclevel
        ydk::YLeaf ciicircpassivecircuit; //type: boolean
        ydk::YLeaf ciicircmeshgroupenabled; //type: Ciicircmeshgroupenabled
        ydk::YLeaf ciicircmeshgroup; //type: uint32
        ydk::YLeaf ciicircsmallhellos; //type: boolean
        ydk::YLeaf ciicirclastuptime; //type: uint32
        ydk::YLeaf ciicirc3wayenabled; //type: boolean
        ydk::YLeaf ciicircextendedcircid; //type: uint32
        class Ciicirctype;
        class Ciicirclevel;
        class Ciicircmeshgroupenabled;

}; // CiscoIetfIsisMib::Ciicirctable::Ciicircentry


class CiscoIetfIsisMib::Ciicircleveltable : public ydk::Entity
{
    public:
        Ciicircleveltable();
        ~Ciicircleveltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciicirclevelentry; //type: CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry> > ciicirclevelentry;
        
}; // CiscoIetfIsisMib::Ciicircleveltable


class CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry : public ydk::Entity
{
    public:
        Ciicirclevelentry();
        ~Ciicirclevelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciicirclevelindex; //type: Ciicirclevelindex
        ydk::YLeaf ciicirclevelmetric; //type: int32
        ydk::YLeaf ciicirclevelwidemetric; //type: uint32
        ydk::YLeaf ciicirclevelispriority; //type: int32
        ydk::YLeaf ciicirclevelidoctet; //type: int32
        ydk::YLeaf ciicirclevelid; //type: binary
        ydk::YLeaf ciicircleveldesis; //type: binary
        ydk::YLeaf ciicirclevelhellomultiplier; //type: int32
        ydk::YLeaf ciicirclevelhellotimer; //type: int32
        ydk::YLeaf ciicircleveldrhellotimer; //type: int32
        ydk::YLeaf ciicirclevellspthrottle; //type: uint32
        ydk::YLeaf ciicirclevelminlspretransint; //type: int32
        ydk::YLeaf ciicirclevelcsnpinterval; //type: int32
        ydk::YLeaf ciicirclevelpartsnpinterval; //type: int32
        class Ciicirclevelindex;

}; // CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry


class CiscoIetfIsisMib::Ciisystemcountertable : public ydk::Entity
{
    public:
        Ciisystemcountertable();
        ~Ciisystemcountertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciisystemcounterentry; //type: CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry> > ciisystemcounterentry;
        
}; // CiscoIetfIsisMib::Ciisystemcountertable


class CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry : public ydk::Entity
{
    public:
        Ciisystemcounterentry();
        ~Ciisystemcounterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciisysstatlevel; //type: Ciisysstatlevel
        ydk::YLeaf ciisysstatcorrlsps; //type: uint32
        ydk::YLeaf ciisysstatauthtypefails; //type: uint32
        ydk::YLeaf ciisysstatauthfails; //type: uint32
        ydk::YLeaf ciisysstatlspdbaseoloads; //type: uint32
        ydk::YLeaf ciisysstatmanaddrdropfromareas; //type: uint32
        ydk::YLeaf ciisysstatattmpttoexmaxseqnums; //type: uint32
        ydk::YLeaf ciisysstatseqnumskips; //type: uint32
        ydk::YLeaf ciisysstatownlsppurges; //type: uint32
        ydk::YLeaf ciisysstatidfieldlenmismatches; //type: uint32
        ydk::YLeaf ciisysstatpartchanges; //type: uint32
        ydk::YLeaf ciisysstatspfruns; //type: uint32
        ydk::YLeaf ciisysstatlsperrors; //type: uint32
        class Ciisysstatlevel;

}; // CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry


class CiscoIetfIsisMib::Ciicircuitcountertable : public ydk::Entity
{
    public:
        Ciicircuitcountertable();
        ~Ciicircuitcountertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciicircuitcounterentry; //type: CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry> > ciicircuitcounterentry;
        
}; // CiscoIetfIsisMib::Ciicircuitcountertable


class CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry : public ydk::Entity
{
    public:
        Ciicircuitcounterentry();
        ~Ciicircuitcounterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciicircuittype; //type: Ciicircuittype
        ydk::YLeaf ciicircadjchanges; //type: uint32
        ydk::YLeaf ciicircnumadj; //type: uint32
        ydk::YLeaf ciicircinitfails; //type: uint32
        ydk::YLeaf ciicircrejadjs; //type: uint32
        ydk::YLeaf ciicircidfieldlenmismatches; //type: uint32
        ydk::YLeaf ciicircmaxareaaddrmismatches; //type: uint32
        ydk::YLeaf ciicircauthtypefails; //type: uint32
        ydk::YLeaf ciicircauthfails; //type: uint32
        ydk::YLeaf ciicirclandesischanges; //type: uint32
        class Ciicircuittype;

}; // CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry


class CiscoIetfIsisMib::Ciipacketcountertable : public ydk::Entity
{
    public:
        Ciipacketcountertable();
        ~Ciipacketcountertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciipacketcounterentry; //type: CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry> > ciipacketcounterentry;
        
}; // CiscoIetfIsisMib::Ciipacketcountertable


class CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry : public ydk::Entity
{
    public:
        Ciipacketcounterentry();
        ~Ciipacketcounterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciipacketcountlevel; //type: Ciipacketcountlevel
        ydk::YLeaf ciipacketcountdirection; //type: Ciipacketcountdirection
        ydk::YLeaf ciipacketcountiihellos; //type: uint32
        ydk::YLeaf ciipacketcountishellos; //type: uint32
        ydk::YLeaf ciipacketcounteshellos; //type: uint32
        ydk::YLeaf ciipacketcountlsps; //type: uint32
        ydk::YLeaf ciipacketcountcsnps; //type: uint32
        ydk::YLeaf ciipacketcountpsnps; //type: uint32
        ydk::YLeaf ciipacketcountunknowns; //type: uint32
        class Ciipacketcountlevel;
        class Ciipacketcountdirection;

}; // CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry


class CiscoIetfIsisMib::Ciiisadjtable : public ydk::Entity
{
    public:
        Ciiisadjtable();
        ~Ciiisadjtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiisadjentry; //type: CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry> > ciiisadjentry;
        
}; // CiscoIetfIsisMib::Ciiisadjtable


class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry : public ydk::Entity
{
    public:
        Ciiisadjentry();
        ~Ciiisadjentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciiisadjindex; //type: int32
        ydk::YLeaf ciiisadjstate; //type: Ciiisadjstate
        ydk::YLeaf ciiisadj3waystate; //type: Ciiisadj3Waystate
        ydk::YLeaf ciiisadjneighsnpaaddress; //type: binary
        ydk::YLeaf ciiisadjneighsystype; //type: Ciiisadjneighsystype
        ydk::YLeaf ciiisadjneighsysid; //type: binary
        ydk::YLeaf ciiisadjnbrextendedcircid; //type: uint32
        ydk::YLeaf ciiisadjusage; //type: Ciiisadjusage
        ydk::YLeaf ciiisadjholdtimer; //type: uint32
        ydk::YLeaf ciiisadjneighpriority; //type: int32
        ydk::YLeaf ciiisadjlastuptime; //type: uint32
        class Ciiisadjstate;
        class Ciiisadj3Waystate;
        class Ciiisadjneighsystype;
        class Ciiisadjusage;

}; // CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry


class CiscoIetfIsisMib::Ciiisadjareaaddrtable : public ydk::Entity
{
    public:
        Ciiisadjareaaddrtable();
        ~Ciiisadjareaaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiisadjareaaddrentry; //type: CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry> > ciiisadjareaaddrentry;
        
}; // CiscoIetfIsisMib::Ciiisadjareaaddrtable


class CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry : public ydk::Entity
{
    public:
        Ciiisadjareaaddrentry();
        ~Ciiisadjareaaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjareaaddrindex; //type: int32
        ydk::YLeaf ciiisadjareaaddress; //type: binary

}; // CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry


class CiscoIetfIsisMib::Ciiisadjipaddrtable : public ydk::Entity
{
    public:
        Ciiisadjipaddrtable();
        ~Ciiisadjipaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiisadjipaddrentry; //type: CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry> > ciiisadjipaddrentry;
        
}; // CiscoIetfIsisMib::Ciiisadjipaddrtable


class CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry : public ydk::Entity
{
    public:
        Ciiisadjipaddrentry();
        ~Ciiisadjipaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjipaddrindex; //type: int32
        ydk::YLeaf ciiisadjipaddrtype; //type: Inetaddresstype
        ydk::YLeaf ciiisadjipaddraddress; //type: binary

}; // CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry


class CiscoIetfIsisMib::Ciiisadjprotsupptable : public ydk::Entity
{
    public:
        Ciiisadjprotsupptable();
        ~Ciiisadjprotsupptable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiisadjprotsuppentry; //type: CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry> > ciiisadjprotsuppentry;
        
}; // CiscoIetfIsisMib::Ciiisadjprotsupptable


class CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry : public ydk::Entity
{
    public:
        Ciiisadjprotsuppentry();
        ~Ciiisadjprotsuppentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        ydk::YLeaf ciiisadjindex;
        ydk::YLeaf ciiisadjprotsuppprotocol; //type: Ciisupportedprotocol

}; // CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry


class CiscoIetfIsisMib::Ciiratable : public ydk::Entity
{
    public:
        Ciiratable();
        ~Ciiratable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiraentry; //type: CiscoIetfIsisMib::Ciiratable::Ciiraentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiratable::Ciiraentry> > ciiraentry;
        
}; // CiscoIetfIsisMib::Ciiratable


class CiscoIetfIsisMib::Ciiratable::Ciiraentry : public ydk::Entity
{
    public:
        Ciiraentry();
        ~Ciiraentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        ydk::YLeaf ciicircindex;
        ydk::YLeaf ciiraindex; //type: int32
        ydk::YLeaf ciiraexiststate; //type: Rowstatus
        ydk::YLeaf ciiraadminstate; //type: Ciiadminstate
        ydk::YLeaf ciiraaddrprefix; //type: binary
        ydk::YLeaf ciiramaptype; //type: Ciiramaptype
        ydk::YLeaf ciirametric; //type: int32
        ydk::YLeaf ciirametrictype; //type: Ciimetrictype
        ydk::YLeaf ciirasnpaaddress; //type: binary
        ydk::YLeaf ciirasnpamask; //type: binary
        ydk::YLeaf ciirasnpaprefix; //type: binary
        ydk::YLeaf ciiratype; //type: Ciiratype
        class Ciiramaptype;
        class Ciiratype;

}; // CiscoIetfIsisMib::Ciiratable::Ciiraentry


class CiscoIetfIsisMib::Ciiipratable : public ydk::Entity
{
    public:
        Ciiipratable();
        ~Ciiipratable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciiipraentry; //type: CiscoIetfIsisMib::Ciiipratable::Ciiipraentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiipratable::Ciiipraentry> > ciiipraentry;
        
}; // CiscoIetfIsisMib::Ciiipratable


class CiscoIetfIsisMib::Ciiipratable::Ciiipraentry : public ydk::Entity
{
    public:
        Ciiipraentry();
        ~Ciiipraentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciiipradesttype; //type: Inetaddresstype
        ydk::YLeaf ciiipradest; //type: binary
        ydk::YLeaf ciiipradestprefixlen; //type: uint32
        ydk::YLeaf ciiipranexthopindex; //type: int32
        ydk::YLeaf ciiipranexthoptype; //type: Inetaddresstype
        ydk::YLeaf ciiipranexthop; //type: binary
        ydk::YLeaf ciiipratype; //type: Ciiipratype
        ydk::YLeaf ciiipraexiststate; //type: Rowstatus
        ydk::YLeaf ciiipraadminstate; //type: Ciiadminstate
        ydk::YLeaf ciiiprametric; //type: int32
        ydk::YLeaf ciiiprametrictype; //type: Ciimetrictype
        ydk::YLeaf ciiiprafullmetric; //type: uint32
        ydk::YLeaf ciiiprasnpaaddress; //type: binary
        ydk::YLeaf ciiiprasourcetype; //type: Ciiiprasourcetype
        class Ciiipratype;
        class Ciiiprasourcetype;

}; // CiscoIetfIsisMib::Ciiipratable::Ciiipraentry


class CiscoIetfIsisMib::Ciilspsummarytable : public ydk::Entity
{
    public:
        Ciilspsummarytable();
        ~Ciilspsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciilspsummaryentry; //type: CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry> > ciilspsummaryentry;
        
}; // CiscoIetfIsisMib::Ciilspsummarytable


class CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry : public ydk::Entity
{
    public:
        Ciilspsummaryentry();
        ~Ciilspsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciilsplevel; //type: Ciiislevel
        ydk::YLeaf ciilspid; //type: binary
        ydk::YLeaf ciilspseq; //type: uint32
        ydk::YLeaf ciilspzerolife; //type: boolean
        ydk::YLeaf ciilspchecksum; //type: uint32
        ydk::YLeaf ciilsplifetimeremain; //type: uint32
        ydk::YLeaf ciilsppdulength; //type: uint32
        ydk::YLeaf ciilspattributes; //type: uint32

}; // CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry


class CiscoIetfIsisMib::Ciilsptlvtable : public ydk::Entity
{
    public:
        Ciilsptlvtable();
        ~Ciilsptlvtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ciilsptlventry; //type: CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry> > ciilsptlventry;
        
}; // CiscoIetfIsisMib::Ciilsptlvtable


class CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry : public ydk::Entity
{
    public:
        Ciilsptlventry();
        ~Ciilsptlventry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ciilsplevel; //type: Ciiislevel
        //type: binary (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::ciilspid)
        ydk::YLeaf ciilspid;
        ydk::YLeaf ciilsptlvindex; //type: uint32
        ydk::YLeaf ciilsptlvseq; //type: uint32
        ydk::YLeaf ciilsptlvchecksum; //type: uint32
        ydk::YLeaf ciilsptlvtype; //type: uint32
        ydk::YLeaf ciilsptlvlen; //type: uint32
        ydk::YLeaf ciilsptlvvalue; //type: binary

}; // CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry

class Ciimetricstyle : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf narrow;
        static const ydk::Enum::YLeaf wide;
        static const ydk::Enum::YLeaf both;

};

class Ciiadminstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf off;

};

class Ciilevelstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf overloaded;

};

class Ciimetrictype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

};

class Ciiislevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf area;
        static const ydk::Enum::YLeaf domain;

};

class Ciisupportedprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iso8473;
        static const ydk::Enum::YLeaf ipV6;
        static const ydk::Enum::YLeaf ip;

};

class CiscoIetfIsisMib::Ciisysobject::Ciisysversion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf one;

};

class CiscoIetfIsisMib::Ciisysobject::Ciisystype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;
        static const ydk::Enum::YLeaf level1L2IS;

};

class CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::Ciisyslevelindex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

};

class CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirctype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf broadcast;
        static const ydk::Enum::YLeaf ptToPt;
        static const ydk::Enum::YLeaf staticIn;
        static const ydk::Enum::YLeaf staticOut;
        static const ydk::Enum::YLeaf dA;

};

class CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicirclevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1L2;

};

class CiscoIetfIsisMib::Ciicirctable::Ciicircentry::Ciicircmeshgroupenabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf blocked;
        static const ydk::Enum::YLeaf set;

};

class CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::Ciicirclevelindex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

};

class CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::Ciisysstatlevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1IS;
        static const ydk::Enum::YLeaf level2IS;

};

class CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::Ciicircuittype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lanlevel1;
        static const ydk::Enum::YLeaf lanlevel2;
        static const ydk::Enum::YLeaf p2pcircuit;

};

class CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountlevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;

};

class CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::Ciipacketcountdirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sending;
        static const ydk::Enum::YLeaf receiving;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf failed;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3Waystate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf initializing;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf failed;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjneighsystype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf l1IntermediateSystem;
        static const ydk::Enum::YLeaf l2IntermediateSystem;
        static const ydk::Enum::YLeaf l1L2IntermediateSystem;
        static const ydk::Enum::YLeaf unknown;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadjusage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;
        static const ydk::Enum::YLeaf level1and2;

};

class CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiramaptype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf explicit_;
        static const ydk::Enum::YLeaf extractIDI;
        static const ydk::Enum::YLeaf extractDSP;

};

class CiscoIetfIsisMib::Ciiratable::Ciiraentry::Ciiratype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf automatic;

};

class CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiipratype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf manual;
        static const ydk::Enum::YLeaf automatic;

};

class CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::Ciiiprasourcetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf ospfv2;
        static const ydk::Enum::YLeaf ospfv3;
        static const ydk::Enum::YLeaf isis;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf igrp;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf other;

};


}
}

#endif /* _CISCO_IETF_ISIS_MIB_ */

