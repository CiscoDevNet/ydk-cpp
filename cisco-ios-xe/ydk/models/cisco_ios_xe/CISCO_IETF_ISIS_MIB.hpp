#ifndef _CISCO_IETF_ISIS_MIB_
#define _CISCO_IETF_ISIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_IETF_ISIS_MIB {

class CiscoIetfIsisMib : public Entity
{
    public:
        CiscoIetfIsisMib();
        ~CiscoIetfIsisMib();

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


class CiscoIetfIsisMib::Ciisysobject : public Entity
{
    public:
        Ciisysobject();
        ~Ciisysobject();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciisysversion; //type: CiisysversionEnum
        YLeaf ciisystype; //type: CiisystypeEnum
        YLeaf ciisysid; //type: binary
        YLeaf ciisysmaxpathsplits; //type: int32
        YLeaf ciisysmaxlspgenint; //type: int32
        YLeaf ciisyspolleshellorate; //type: uint32
        YLeaf ciisyswaittime; //type: uint32
        YLeaf ciisysadminstate; //type: CiiadminstateEnum
        YLeaf ciisysl2tol1leaking; //type: boolean
        YLeaf ciisysmaxage; //type: uint32
        YLeaf ciisysreceivelspbuffersize; //type: uint32
        class CiisysversionEnum;
        class CiisystypeEnum;

}; // CiscoIetfIsisMib::Ciisysobject


class CiscoIetfIsisMib::Ciicirc : public Entity
{
    public:
        Ciicirc();
        ~Ciicirc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciinextcircindex; //type: uint32

}; // CiscoIetfIsisMib::Ciicirc


class CiscoIetfIsisMib::Ciimanareaaddrtable : public Entity
{
    public:
        Ciimanareaaddrtable();
        ~Ciimanareaaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciimanareaaddrentry; //type: CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry> > ciimanareaaddrentry;
        
}; // CiscoIetfIsisMib::Ciimanareaaddrtable


class CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry : public Entity
{
    public:
        Ciimanareaaddrentry();
        ~Ciimanareaaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciimanareaaddr; //type: binary
        YLeaf ciimanareaaddrexiststate; //type: RowstatusEnum

}; // CiscoIetfIsisMib::Ciimanareaaddrtable::Ciimanareaaddrentry


class CiscoIetfIsisMib::Ciiareaaddrtable : public Entity
{
    public:
        Ciiareaaddrtable();
        ~Ciiareaaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiareaaddrentry; //type: CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry> > ciiareaaddrentry;
        
}; // CiscoIetfIsisMib::Ciiareaaddrtable


class CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry : public Entity
{
    public:
        Ciiareaaddrentry();
        ~Ciiareaaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciiareaaddr; //type: binary

}; // CiscoIetfIsisMib::Ciiareaaddrtable::Ciiareaaddrentry


class CiscoIetfIsisMib::Ciisysprotsupptable : public Entity
{
    public:
        Ciisysprotsupptable();
        ~Ciisysprotsupptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciisysprotsuppentry; //type: CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry> > ciisysprotsuppentry;
        
}; // CiscoIetfIsisMib::Ciisysprotsupptable


class CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry : public Entity
{
    public:
        Ciisysprotsuppentry();
        ~Ciisysprotsuppentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciisysprotsuppprotocol; //type: CiisupportedprotocolEnum
        YLeaf ciisysprotsuppexiststate; //type: RowstatusEnum

}; // CiscoIetfIsisMib::Ciisysprotsupptable::Ciisysprotsuppentry


class CiscoIetfIsisMib::Ciisummaddrtable : public Entity
{
    public:
        Ciisummaddrtable();
        ~Ciisummaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciisummaddrentry; //type: CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry> > ciisummaddrentry;
        
}; // CiscoIetfIsisMib::Ciisummaddrtable


class CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry : public Entity
{
    public:
        Ciisummaddrentry();
        ~Ciisummaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciisummaddresstype; //type: InetaddresstypeEnum
        YLeaf ciisummaddress; //type: binary
        YLeaf ciisummaddrprefixlen; //type: uint32
        YLeaf ciisummaddrexiststate; //type: RowstatusEnum
        YLeaf ciisummaddrmetric; //type: int32
        YLeaf ciisummaddrfullmetric; //type: uint32

}; // CiscoIetfIsisMib::Ciisummaddrtable::Ciisummaddrentry


class CiscoIetfIsisMib::Ciiredistributeaddrtable : public Entity
{
    public:
        Ciiredistributeaddrtable();
        ~Ciiredistributeaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiredistributeaddrentry; //type: CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry> > ciiredistributeaddrentry;
        
}; // CiscoIetfIsisMib::Ciiredistributeaddrtable


class CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry : public Entity
{
    public:
        Ciiredistributeaddrentry();
        ~Ciiredistributeaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciiredistributeaddrtype; //type: InetaddresstypeEnum
        YLeaf ciiredistributeaddraddress; //type: binary
        YLeaf ciiredistributeaddrprefixlen; //type: uint32
        YLeaf ciiredistributeaddrexiststate; //type: RowstatusEnum

}; // CiscoIetfIsisMib::Ciiredistributeaddrtable::Ciiredistributeaddrentry


class CiscoIetfIsisMib::Ciiroutertable : public Entity
{
    public:
        Ciiroutertable();
        ~Ciiroutertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciirouterentry; //type: CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry> > ciirouterentry;
        
}; // CiscoIetfIsisMib::Ciiroutertable


class CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry : public Entity
{
    public:
        Ciirouterentry();
        ~Ciirouterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciiroutersysid; //type: binary
        YLeaf ciirouterlevel; //type: CiiislevelEnum
        YLeaf ciirouterhostname; //type: string
        YLeaf ciirouterid; //type: uint32

}; // CiscoIetfIsisMib::Ciiroutertable::Ciirouterentry


class CiscoIetfIsisMib::Ciisysleveltable : public Entity
{
    public:
        Ciisysleveltable();
        ~Ciisysleveltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciisyslevelentry; //type: CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry> > ciisyslevelentry;
        
}; // CiscoIetfIsisMib::Ciisysleveltable


class CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry : public Entity
{
    public:
        Ciisyslevelentry();
        ~Ciisyslevelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciisyslevelindex; //type: CiisyslevelindexEnum
        YLeaf ciisysleveloriglspbuffsize; //type: int32
        YLeaf ciisyslevelminlspgenint; //type: uint32
        YLeaf ciisysleveloverloadstate; //type: CiilevelstateEnum
        YLeaf ciisyslevelsetoverload; //type: boolean
        YLeaf ciisyslevelsetoverloaduntil; //type: uint32
        YLeaf ciisyslevelmetricstyle; //type: CiimetricstyleEnum
        YLeaf ciisyslevelspfconsiders; //type: CiimetricstyleEnum
        YLeaf ciisyslevelteenabled; //type: boolean
        class CiisyslevelindexEnum;

}; // CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry


class CiscoIetfIsisMib::Ciicirctable : public Entity
{
    public:
        Ciicirctable();
        ~Ciicirctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciicircentry; //type: CiscoIetfIsisMib::Ciicirctable::Ciicircentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry> > ciicircentry;
        
}; // CiscoIetfIsisMib::Ciicirctable


class CiscoIetfIsisMib::Ciicirctable::Ciicircentry : public Entity
{
    public:
        Ciicircentry();
        ~Ciicircentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciicircindex; //type: int32
        YLeaf ciicircifindex; //type: int32
        YLeaf ciicircifsubindex; //type: int32
        YLeaf ciicircadminstate; //type: CiiadminstateEnum
        YLeaf ciicircexiststate; //type: RowstatusEnum
        YLeaf ciicirctype; //type: CiicirctypeEnum
        YLeaf ciicircextdomain; //type: boolean
        YLeaf ciicirclevel; //type: CiicirclevelEnum
        YLeaf ciicircpassivecircuit; //type: boolean
        YLeaf ciicircmeshgroupenabled; //type: CiicircmeshgroupenabledEnum
        YLeaf ciicircmeshgroup; //type: uint32
        YLeaf ciicircsmallhellos; //type: boolean
        YLeaf ciicirclastuptime; //type: uint32
        YLeaf ciicirc3wayenabled; //type: boolean
        YLeaf ciicircextendedcircid; //type: uint32
        class CiicirctypeEnum;
        class CiicirclevelEnum;
        class CiicircmeshgroupenabledEnum;

}; // CiscoIetfIsisMib::Ciicirctable::Ciicircentry


class CiscoIetfIsisMib::Ciicircleveltable : public Entity
{
    public:
        Ciicircleveltable();
        ~Ciicircleveltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciicirclevelentry; //type: CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry> > ciicirclevelentry;
        
}; // CiscoIetfIsisMib::Ciicircleveltable


class CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry : public Entity
{
    public:
        Ciicirclevelentry();
        ~Ciicirclevelentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        YLeaf ciicirclevelindex; //type: CiicirclevelindexEnum
        YLeaf ciicirclevelmetric; //type: int32
        YLeaf ciicirclevelwidemetric; //type: uint32
        YLeaf ciicirclevelispriority; //type: int32
        YLeaf ciicirclevelidoctet; //type: int32
        YLeaf ciicirclevelid; //type: binary
        YLeaf ciicircleveldesis; //type: binary
        YLeaf ciicirclevelhellomultiplier; //type: int32
        YLeaf ciicirclevelhellotimer; //type: int32
        YLeaf ciicircleveldrhellotimer; //type: int32
        YLeaf ciicirclevellspthrottle; //type: uint32
        YLeaf ciicirclevelminlspretransint; //type: int32
        YLeaf ciicirclevelcsnpinterval; //type: int32
        YLeaf ciicirclevelpartsnpinterval; //type: int32
        class CiicirclevelindexEnum;

}; // CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry


class CiscoIetfIsisMib::Ciisystemcountertable : public Entity
{
    public:
        Ciisystemcountertable();
        ~Ciisystemcountertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciisystemcounterentry; //type: CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry> > ciisystemcounterentry;
        
}; // CiscoIetfIsisMib::Ciisystemcountertable


class CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry : public Entity
{
    public:
        Ciisystemcounterentry();
        ~Ciisystemcounterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciisysstatlevel; //type: CiisysstatlevelEnum
        YLeaf ciisysstatcorrlsps; //type: uint32
        YLeaf ciisysstatauthtypefails; //type: uint32
        YLeaf ciisysstatauthfails; //type: uint32
        YLeaf ciisysstatlspdbaseoloads; //type: uint32
        YLeaf ciisysstatmanaddrdropfromareas; //type: uint32
        YLeaf ciisysstatattmpttoexmaxseqnums; //type: uint32
        YLeaf ciisysstatseqnumskips; //type: uint32
        YLeaf ciisysstatownlsppurges; //type: uint32
        YLeaf ciisysstatidfieldlenmismatches; //type: uint32
        YLeaf ciisysstatpartchanges; //type: uint32
        YLeaf ciisysstatspfruns; //type: uint32
        YLeaf ciisysstatlsperrors; //type: uint32
        class CiisysstatlevelEnum;

}; // CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry


class CiscoIetfIsisMib::Ciicircuitcountertable : public Entity
{
    public:
        Ciicircuitcountertable();
        ~Ciicircuitcountertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciicircuitcounterentry; //type: CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry> > ciicircuitcounterentry;
        
}; // CiscoIetfIsisMib::Ciicircuitcountertable


class CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry : public Entity
{
    public:
        Ciicircuitcounterentry();
        ~Ciicircuitcounterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        YLeaf ciicircuittype; //type: CiicircuittypeEnum
        YLeaf ciicircadjchanges; //type: uint32
        YLeaf ciicircnumadj; //type: uint32
        YLeaf ciicircinitfails; //type: uint32
        YLeaf ciicircrejadjs; //type: uint32
        YLeaf ciicircidfieldlenmismatches; //type: uint32
        YLeaf ciicircmaxareaaddrmismatches; //type: uint32
        YLeaf ciicircauthtypefails; //type: uint32
        YLeaf ciicircauthfails; //type: uint32
        YLeaf ciicirclandesischanges; //type: uint32
        class CiicircuittypeEnum;

}; // CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry


class CiscoIetfIsisMib::Ciipacketcountertable : public Entity
{
    public:
        Ciipacketcountertable();
        ~Ciipacketcountertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciipacketcounterentry; //type: CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry> > ciipacketcounterentry;
        
}; // CiscoIetfIsisMib::Ciipacketcountertable


class CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry : public Entity
{
    public:
        Ciipacketcounterentry();
        ~Ciipacketcounterentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        YLeaf ciipacketcountlevel; //type: CiipacketcountlevelEnum
        YLeaf ciipacketcountdirection; //type: CiipacketcountdirectionEnum
        YLeaf ciipacketcountiihellos; //type: uint32
        YLeaf ciipacketcountishellos; //type: uint32
        YLeaf ciipacketcounteshellos; //type: uint32
        YLeaf ciipacketcountlsps; //type: uint32
        YLeaf ciipacketcountcsnps; //type: uint32
        YLeaf ciipacketcountpsnps; //type: uint32
        YLeaf ciipacketcountunknowns; //type: uint32
        class CiipacketcountlevelEnum;
        class CiipacketcountdirectionEnum;

}; // CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry


class CiscoIetfIsisMib::Ciiisadjtable : public Entity
{
    public:
        Ciiisadjtable();
        ~Ciiisadjtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiisadjentry; //type: CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry> > ciiisadjentry;
        
}; // CiscoIetfIsisMib::Ciiisadjtable


class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry : public Entity
{
    public:
        Ciiisadjentry();
        ~Ciiisadjentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        YLeaf ciiisadjindex; //type: int32
        YLeaf ciiisadjstate; //type: CiiisadjstateEnum
        YLeaf ciiisadj3waystate; //type: Ciiisadj3WaystateEnum
        YLeaf ciiisadjneighsnpaaddress; //type: binary
        YLeaf ciiisadjneighsystype; //type: CiiisadjneighsystypeEnum
        YLeaf ciiisadjneighsysid; //type: binary
        YLeaf ciiisadjnbrextendedcircid; //type: uint32
        YLeaf ciiisadjusage; //type: CiiisadjusageEnum
        YLeaf ciiisadjholdtimer; //type: uint32
        YLeaf ciiisadjneighpriority; //type: int32
        YLeaf ciiisadjlastuptime; //type: uint32
        class CiiisadjstateEnum;
        class Ciiisadj3WaystateEnum;
        class CiiisadjneighsystypeEnum;
        class CiiisadjusageEnum;

}; // CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry


class CiscoIetfIsisMib::Ciiisadjareaaddrtable : public Entity
{
    public:
        Ciiisadjareaaddrtable();
        ~Ciiisadjareaaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiisadjareaaddrentry; //type: CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry> > ciiisadjareaaddrentry;
        
}; // CiscoIetfIsisMib::Ciiisadjareaaddrtable


class CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry : public Entity
{
    public:
        Ciiisadjareaaddrentry();
        ~Ciiisadjareaaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        YLeaf ciiisadjindex;
        YLeaf ciiisadjareaaddrindex; //type: int32
        YLeaf ciiisadjareaaddress; //type: binary

}; // CiscoIetfIsisMib::Ciiisadjareaaddrtable::Ciiisadjareaaddrentry


class CiscoIetfIsisMib::Ciiisadjipaddrtable : public Entity
{
    public:
        Ciiisadjipaddrtable();
        ~Ciiisadjipaddrtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiisadjipaddrentry; //type: CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry> > ciiisadjipaddrentry;
        
}; // CiscoIetfIsisMib::Ciiisadjipaddrtable


class CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry : public Entity
{
    public:
        Ciiisadjipaddrentry();
        ~Ciiisadjipaddrentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        YLeaf ciiisadjindex;
        YLeaf ciiisadjipaddrindex; //type: int32
        YLeaf ciiisadjipaddrtype; //type: InetaddresstypeEnum
        YLeaf ciiisadjipaddraddress; //type: binary

}; // CiscoIetfIsisMib::Ciiisadjipaddrtable::Ciiisadjipaddrentry


class CiscoIetfIsisMib::Ciiisadjprotsupptable : public Entity
{
    public:
        Ciiisadjprotsupptable();
        ~Ciiisadjprotsupptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiisadjprotsuppentry; //type: CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry> > ciiisadjprotsuppentry;
        
}; // CiscoIetfIsisMib::Ciiisadjprotsupptable


class CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry : public Entity
{
    public:
        Ciiisadjprotsuppentry();
        ~Ciiisadjprotsuppentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::ciiisadjindex)
        YLeaf ciiisadjindex;
        YLeaf ciiisadjprotsuppprotocol; //type: CiisupportedprotocolEnum

}; // CiscoIetfIsisMib::Ciiisadjprotsupptable::Ciiisadjprotsuppentry


class CiscoIetfIsisMib::Ciiratable : public Entity
{
    public:
        Ciiratable();
        ~Ciiratable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiraentry; //type: CiscoIetfIsisMib::Ciiratable::Ciiraentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiratable::Ciiraentry> > ciiraentry;
        
}; // CiscoIetfIsisMib::Ciiratable


class CiscoIetfIsisMib::Ciiratable::Ciiraentry : public Entity
{
    public:
        Ciiraentry();
        ~Ciiraentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciicirctable::Ciicircentry::ciicircindex)
        YLeaf ciicircindex;
        YLeaf ciiraindex; //type: int32
        YLeaf ciiraexiststate; //type: RowstatusEnum
        YLeaf ciiraadminstate; //type: CiiadminstateEnum
        YLeaf ciiraaddrprefix; //type: binary
        YLeaf ciiramaptype; //type: CiiramaptypeEnum
        YLeaf ciirametric; //type: int32
        YLeaf ciirametrictype; //type: CiimetrictypeEnum
        YLeaf ciirasnpaaddress; //type: binary
        YLeaf ciirasnpamask; //type: binary
        YLeaf ciirasnpaprefix; //type: binary
        YLeaf ciiratype; //type: CiiratypeEnum
        class CiiramaptypeEnum;
        class CiiratypeEnum;

}; // CiscoIetfIsisMib::Ciiratable::Ciiraentry


class CiscoIetfIsisMib::Ciiipratable : public Entity
{
    public:
        Ciiipratable();
        ~Ciiipratable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciiipraentry; //type: CiscoIetfIsisMib::Ciiipratable::Ciiipraentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciiipratable::Ciiipraentry> > ciiipraentry;
        
}; // CiscoIetfIsisMib::Ciiipratable


class CiscoIetfIsisMib::Ciiipratable::Ciiipraentry : public Entity
{
    public:
        Ciiipraentry();
        ~Ciiipraentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciiipradesttype; //type: InetaddresstypeEnum
        YLeaf ciiipradest; //type: binary
        YLeaf ciiipradestprefixlen; //type: uint32
        YLeaf ciiipranexthopindex; //type: int32
        YLeaf ciiipranexthoptype; //type: InetaddresstypeEnum
        YLeaf ciiipranexthop; //type: binary
        YLeaf ciiipratype; //type: CiiipratypeEnum
        YLeaf ciiipraexiststate; //type: RowstatusEnum
        YLeaf ciiipraadminstate; //type: CiiadminstateEnum
        YLeaf ciiiprametric; //type: int32
        YLeaf ciiiprametrictype; //type: CiimetrictypeEnum
        YLeaf ciiiprafullmetric; //type: uint32
        YLeaf ciiiprasnpaaddress; //type: binary
        YLeaf ciiiprasourcetype; //type: CiiiprasourcetypeEnum
        class CiiipratypeEnum;
        class CiiiprasourcetypeEnum;

}; // CiscoIetfIsisMib::Ciiipratable::Ciiipraentry


class CiscoIetfIsisMib::Ciilspsummarytable : public Entity
{
    public:
        Ciilspsummarytable();
        ~Ciilspsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciilspsummaryentry; //type: CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry> > ciilspsummaryentry;
        
}; // CiscoIetfIsisMib::Ciilspsummarytable


class CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry : public Entity
{
    public:
        Ciilspsummaryentry();
        ~Ciilspsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciilsplevel; //type: CiiislevelEnum
        YLeaf ciilspid; //type: binary
        YLeaf ciilspseq; //type: uint32
        YLeaf ciilspzerolife; //type: boolean
        YLeaf ciilspchecksum; //type: uint32
        YLeaf ciilsplifetimeremain; //type: uint32
        YLeaf ciilsppdulength; //type: uint32
        YLeaf ciilspattributes; //type: uint32

}; // CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry


class CiscoIetfIsisMib::Ciilsptlvtable : public Entity
{
    public:
        Ciilsptlvtable();
        ~Ciilsptlvtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ciilsptlventry; //type: CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry

        std::vector<std::shared_ptr<CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry> > ciilsptlventry;
        
}; // CiscoIetfIsisMib::Ciilsptlvtable


class CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry : public Entity
{
    public:
        Ciilsptlventry();
        ~Ciilsptlventry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ciilsplevel; //type: CiiislevelEnum
        //type: binary (refers to CISCO_IETF_ISIS_MIB::CiscoIetfIsisMib::Ciilspsummarytable::Ciilspsummaryentry::ciilspid)
        YLeaf ciilspid;
        YLeaf ciilsptlvindex; //type: uint32
        YLeaf ciilsptlvseq; //type: uint32
        YLeaf ciilsptlvchecksum; //type: uint32
        YLeaf ciilsptlvtype; //type: uint32
        YLeaf ciilsptlvlen; //type: uint32
        YLeaf ciilsptlvvalue; //type: binary

}; // CiscoIetfIsisMib::Ciilsptlvtable::Ciilsptlventry

class CiimetricstyleEnum : public Enum
{
    public:
        static const Enum::YLeaf narrow;
        static const Enum::YLeaf wide;
        static const Enum::YLeaf both;

};

class CiilevelstateEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;
        static const Enum::YLeaf waiting;
        static const Enum::YLeaf overloaded;

};

class CiisupportedprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf iso8473;
        static const Enum::YLeaf ipV6;
        static const Enum::YLeaf ip;

};

class CiiadminstateEnum : public Enum
{
    public:
        static const Enum::YLeaf on;
        static const Enum::YLeaf off;

};

class CiimetrictypeEnum : public Enum
{
    public:
        static const Enum::YLeaf internal;
        static const Enum::YLeaf external;

};

class CiiislevelEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf area;
        static const Enum::YLeaf domain;

};

class CiscoIetfIsisMib::Ciisysobject::CiisysversionEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf one;

};

class CiscoIetfIsisMib::Ciisysobject::CiisystypeEnum : public Enum
{
    public:
        static const Enum::YLeaf level1IS;
        static const Enum::YLeaf level2IS;
        static const Enum::YLeaf level1L2IS;

};

class CiscoIetfIsisMib::Ciisysleveltable::Ciisyslevelentry::CiisyslevelindexEnum : public Enum
{
    public:
        static const Enum::YLeaf level1IS;
        static const Enum::YLeaf level2IS;

};

class CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirctypeEnum : public Enum
{
    public:
        static const Enum::YLeaf broadcast;
        static const Enum::YLeaf ptToPt;
        static const Enum::YLeaf staticIn;
        static const Enum::YLeaf staticOut;
        static const Enum::YLeaf dA;

};

class CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicirclevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;
        static const Enum::YLeaf level1L2;

};

class CiscoIetfIsisMib::Ciicirctable::Ciicircentry::CiicircmeshgroupenabledEnum : public Enum
{
    public:
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf blocked;
        static const Enum::YLeaf set;

};

class CiscoIetfIsisMib::Ciicircleveltable::Ciicirclevelentry::CiicirclevelindexEnum : public Enum
{
    public:
        static const Enum::YLeaf level1IS;
        static const Enum::YLeaf level2IS;

};

class CiscoIetfIsisMib::Ciisystemcountertable::Ciisystemcounterentry::CiisysstatlevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level1IS;
        static const Enum::YLeaf level2IS;

};

class CiscoIetfIsisMib::Ciicircuitcountertable::Ciicircuitcounterentry::CiicircuittypeEnum : public Enum
{
    public:
        static const Enum::YLeaf lanlevel1;
        static const Enum::YLeaf lanlevel2;
        static const Enum::YLeaf p2pcircuit;

};

class CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::CiipacketcountlevelEnum : public Enum
{
    public:
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;

};

class CiscoIetfIsisMib::Ciipacketcountertable::Ciipacketcounterentry::CiipacketcountdirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf sending;
        static const Enum::YLeaf receiving;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjstateEnum : public Enum
{
    public:
        static const Enum::YLeaf down;
        static const Enum::YLeaf initializing;
        static const Enum::YLeaf up;
        static const Enum::YLeaf failed;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::Ciiisadj3WaystateEnum : public Enum
{
    public:
        static const Enum::YLeaf up;
        static const Enum::YLeaf initializing;
        static const Enum::YLeaf down;
        static const Enum::YLeaf failed;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjneighsystypeEnum : public Enum
{
    public:
        static const Enum::YLeaf l1IntermediateSystem;
        static const Enum::YLeaf l2IntermediateSystem;
        static const Enum::YLeaf l1L2IntermediateSystem;
        static const Enum::YLeaf unknown;

};

class CiscoIetfIsisMib::Ciiisadjtable::Ciiisadjentry::CiiisadjusageEnum : public Enum
{
    public:
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;
        static const Enum::YLeaf level1and2;

};

class CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiramaptypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf explicit_;
        static const Enum::YLeaf extractIDI;
        static const Enum::YLeaf extractDSP;

};

class CiscoIetfIsisMib::Ciiratable::Ciiraentry::CiiratypeEnum : public Enum
{
    public:
        static const Enum::YLeaf manual;
        static const Enum::YLeaf automatic;

};

class CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiipratypeEnum : public Enum
{
    public:
        static const Enum::YLeaf manual;
        static const Enum::YLeaf automatic;

};

class CiscoIetfIsisMib::Ciiipratable::Ciiipraentry::CiiiprasourcetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf direct;
        static const Enum::YLeaf ospfv2;
        static const Enum::YLeaf ospfv3;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf igrp;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf other;

};


}
}

#endif /* _CISCO_IETF_ISIS_MIB_ */

