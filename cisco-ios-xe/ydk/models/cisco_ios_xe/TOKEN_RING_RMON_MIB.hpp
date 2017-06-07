#ifndef _TOKEN_RING_RMON_MIB_
#define _TOKEN_RING_RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace TOKEN_RING_RMON_MIB {

class TokenRingRmonMib : public Entity
{
    public:
        TokenRingRmonMib();
        ~TokenRingRmonMib();

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

        class Tokenringmlstatstable; //type: TokenRingRmonMib::Tokenringmlstatstable
        class Tokenringpstatstable; //type: TokenRingRmonMib::Tokenringpstatstable
        class Tokenringmlhistorytable; //type: TokenRingRmonMib::Tokenringmlhistorytable
        class Tokenringphistorytable; //type: TokenRingRmonMib::Tokenringphistorytable
        class Ringstationcontroltable; //type: TokenRingRmonMib::Ringstationcontroltable
        class Ringstationtable; //type: TokenRingRmonMib::Ringstationtable
        class Ringstationordertable; //type: TokenRingRmonMib::Ringstationordertable
        class Ringstationconfigcontroltable; //type: TokenRingRmonMib::Ringstationconfigcontroltable
        class Ringstationconfigtable; //type: TokenRingRmonMib::Ringstationconfigtable
        class Sourceroutingstatstable; //type: TokenRingRmonMib::Sourceroutingstatstable

        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationconfigcontroltable> ringstationconfigcontroltable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationconfigtable> ringstationconfigtable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationcontroltable> ringstationcontroltable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationordertable> ringstationordertable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationtable> ringstationtable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Sourceroutingstatstable> sourceroutingstatstable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringmlhistorytable> tokenringmlhistorytable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringmlstatstable> tokenringmlstatstable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringphistorytable> tokenringphistorytable;
        std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringpstatstable> tokenringpstatstable;
        
}; // TokenRingRmonMib


class TokenRingRmonMib::Tokenringmlstatstable : public Entity
{
    public:
        Tokenringmlstatstable();
        ~Tokenringmlstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tokenringmlstatsentry; //type: TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry> > tokenringmlstatsentry;
        
}; // TokenRingRmonMib::Tokenringmlstatstable


class TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry : public Entity
{
    public:
        Tokenringmlstatsentry();
        ~Tokenringmlstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tokenringmlstatsindex; //type: int32
        YLeaf tokenringmlstatsdatasource; //type: string
        YLeaf tokenringmlstatsdropevents; //type: uint32
        YLeaf tokenringmlstatsmacoctets; //type: uint32
        YLeaf tokenringmlstatsmacpkts; //type: uint32
        YLeaf tokenringmlstatsringpurgeevents; //type: uint32
        YLeaf tokenringmlstatsringpurgepkts; //type: uint32
        YLeaf tokenringmlstatsbeaconevents; //type: uint32
        YLeaf tokenringmlstatsbeacontime; //type: int32
        YLeaf tokenringmlstatsbeaconpkts; //type: uint32
        YLeaf tokenringmlstatsclaimtokenevents; //type: uint32
        YLeaf tokenringmlstatsclaimtokenpkts; //type: uint32
        YLeaf tokenringmlstatsnaunchanges; //type: uint32
        YLeaf tokenringmlstatslineerrors; //type: uint32
        YLeaf tokenringmlstatsinternalerrors; //type: uint32
        YLeaf tokenringmlstatsbursterrors; //type: uint32
        YLeaf tokenringmlstatsacerrors; //type: uint32
        YLeaf tokenringmlstatsaborterrors; //type: uint32
        YLeaf tokenringmlstatslostframeerrors; //type: uint32
        YLeaf tokenringmlstatscongestionerrors; //type: uint32
        YLeaf tokenringmlstatsframecopiederrors; //type: uint32
        YLeaf tokenringmlstatsfrequencyerrors; //type: uint32
        YLeaf tokenringmlstatstokenerrors; //type: uint32
        YLeaf tokenringmlstatssofterrorreports; //type: uint32
        YLeaf tokenringmlstatsringpollevents; //type: uint32
        YLeaf tokenringmlstatsowner; //type: string
        YLeaf tokenringmlstatsstatus; //type: EntrystatusEnum

}; // TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry


class TokenRingRmonMib::Tokenringpstatstable : public Entity
{
    public:
        Tokenringpstatstable();
        ~Tokenringpstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tokenringpstatsentry; //type: TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry> > tokenringpstatsentry;
        
}; // TokenRingRmonMib::Tokenringpstatstable


class TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry : public Entity
{
    public:
        Tokenringpstatsentry();
        ~Tokenringpstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tokenringpstatsindex; //type: int32
        YLeaf tokenringpstatsdatasource; //type: string
        YLeaf tokenringpstatsdropevents; //type: uint32
        YLeaf tokenringpstatsdataoctets; //type: uint32
        YLeaf tokenringpstatsdatapkts; //type: uint32
        YLeaf tokenringpstatsdatabroadcastpkts; //type: uint32
        YLeaf tokenringpstatsdatamulticastpkts; //type: uint32
        YLeaf tokenringpstatsdatapkts18to63octets; //type: uint32
        YLeaf tokenringpstatsdatapkts64to127octets; //type: uint32
        YLeaf tokenringpstatsdatapkts128to255octets; //type: uint32
        YLeaf tokenringpstatsdatapkts256to511octets; //type: uint32
        YLeaf tokenringpstatsdatapkts512to1023octets; //type: uint32
        YLeaf tokenringpstatsdatapkts1024to2047octets; //type: uint32
        YLeaf tokenringpstatsdatapkts2048to4095octets; //type: uint32
        YLeaf tokenringpstatsdatapkts4096to8191octets; //type: uint32
        YLeaf tokenringpstatsdatapkts8192to18000octets; //type: uint32
        YLeaf tokenringpstatsdatapktsgreaterthan18000octets; //type: uint32
        YLeaf tokenringpstatsowner; //type: string
        YLeaf tokenringpstatsstatus; //type: EntrystatusEnum

}; // TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry


class TokenRingRmonMib::Tokenringmlhistorytable : public Entity
{
    public:
        Tokenringmlhistorytable();
        ~Tokenringmlhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tokenringmlhistoryentry; //type: TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry> > tokenringmlhistoryentry;
        
}; // TokenRingRmonMib::Tokenringmlhistorytable


class TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry : public Entity
{
    public:
        Tokenringmlhistoryentry();
        ~Tokenringmlhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tokenringmlhistoryindex; //type: int32
        YLeaf tokenringmlhistorysampleindex; //type: int32
        YLeaf tokenringmlhistoryintervalstart; //type: uint32
        YLeaf tokenringmlhistorydropevents; //type: uint32
        YLeaf tokenringmlhistorymacoctets; //type: uint32
        YLeaf tokenringmlhistorymacpkts; //type: uint32
        YLeaf tokenringmlhistoryringpurgeevents; //type: uint32
        YLeaf tokenringmlhistoryringpurgepkts; //type: uint32
        YLeaf tokenringmlhistorybeaconevents; //type: uint32
        YLeaf tokenringmlhistorybeacontime; //type: int32
        YLeaf tokenringmlhistorybeaconpkts; //type: uint32
        YLeaf tokenringmlhistoryclaimtokenevents; //type: uint32
        YLeaf tokenringmlhistoryclaimtokenpkts; //type: uint32
        YLeaf tokenringmlhistorynaunchanges; //type: uint32
        YLeaf tokenringmlhistorylineerrors; //type: uint32
        YLeaf tokenringmlhistoryinternalerrors; //type: uint32
        YLeaf tokenringmlhistorybursterrors; //type: uint32
        YLeaf tokenringmlhistoryacerrors; //type: uint32
        YLeaf tokenringmlhistoryaborterrors; //type: uint32
        YLeaf tokenringmlhistorylostframeerrors; //type: uint32
        YLeaf tokenringmlhistorycongestionerrors; //type: uint32
        YLeaf tokenringmlhistoryframecopiederrors; //type: uint32
        YLeaf tokenringmlhistoryfrequencyerrors; //type: uint32
        YLeaf tokenringmlhistorytokenerrors; //type: uint32
        YLeaf tokenringmlhistorysofterrorreports; //type: uint32
        YLeaf tokenringmlhistoryringpollevents; //type: uint32
        YLeaf tokenringmlhistoryactivestations; //type: int32

}; // TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry


class TokenRingRmonMib::Tokenringphistorytable : public Entity
{
    public:
        Tokenringphistorytable();
        ~Tokenringphistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tokenringphistoryentry; //type: TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry> > tokenringphistoryentry;
        
}; // TokenRingRmonMib::Tokenringphistorytable


class TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry : public Entity
{
    public:
        Tokenringphistoryentry();
        ~Tokenringphistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tokenringphistoryindex; //type: int32
        YLeaf tokenringphistorysampleindex; //type: int32
        YLeaf tokenringphistoryintervalstart; //type: uint32
        YLeaf tokenringphistorydropevents; //type: uint32
        YLeaf tokenringphistorydataoctets; //type: uint32
        YLeaf tokenringphistorydatapkts; //type: uint32
        YLeaf tokenringphistorydatabroadcastpkts; //type: uint32
        YLeaf tokenringphistorydatamulticastpkts; //type: uint32
        YLeaf tokenringphistorydatapkts18to63octets; //type: uint32
        YLeaf tokenringphistorydatapkts64to127octets; //type: uint32
        YLeaf tokenringphistorydatapkts128to255octets; //type: uint32
        YLeaf tokenringphistorydatapkts256to511octets; //type: uint32
        YLeaf tokenringphistorydatapkts512to1023octets; //type: uint32
        YLeaf tokenringphistorydatapkts1024to2047octets; //type: uint32
        YLeaf tokenringphistorydatapkts2048to4095octets; //type: uint32
        YLeaf tokenringphistorydatapkts4096to8191octets; //type: uint32
        YLeaf tokenringphistorydatapkts8192to18000octets; //type: uint32
        YLeaf tokenringphistorydatapktsgreaterthan18000octets; //type: uint32

}; // TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry


class TokenRingRmonMib::Ringstationcontroltable : public Entity
{
    public:
        Ringstationcontroltable();
        ~Ringstationcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ringstationcontrolentry; //type: TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry> > ringstationcontrolentry;
        
}; // TokenRingRmonMib::Ringstationcontroltable


class TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry : public Entity
{
    public:
        Ringstationcontrolentry();
        ~Ringstationcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ringstationcontrolifindex; //type: int32
        YLeaf ringstationcontroltablesize; //type: int32
        YLeaf ringstationcontrolactivestations; //type: int32
        YLeaf ringstationcontrolringstate; //type: RingstationcontrolringstateEnum
        YLeaf ringstationcontrolbeaconsender; //type: binary
        YLeaf ringstationcontrolbeaconnaun; //type: binary
        YLeaf ringstationcontrolactivemonitor; //type: binary
        YLeaf ringstationcontrolorderchanges; //type: uint32
        YLeaf ringstationcontrolowner; //type: string
        YLeaf ringstationcontrolstatus; //type: EntrystatusEnum
        class RingstationcontrolringstateEnum;

}; // TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry


class TokenRingRmonMib::Ringstationtable : public Entity
{
    public:
        Ringstationtable();
        ~Ringstationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ringstationentry; //type: TokenRingRmonMib::Ringstationtable::Ringstationentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationtable::Ringstationentry> > ringstationentry;
        
}; // TokenRingRmonMib::Ringstationtable


class TokenRingRmonMib::Ringstationtable::Ringstationentry : public Entity
{
    public:
        Ringstationentry();
        ~Ringstationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ringstationifindex; //type: int32
        YLeaf ringstationmacaddress; //type: binary
        YLeaf ringstationlastnaun; //type: binary
        YLeaf ringstationstationstatus; //type: RingstationstationstatusEnum
        YLeaf ringstationlastentertime; //type: uint32
        YLeaf ringstationlastexittime; //type: uint32
        YLeaf ringstationduplicateaddresses; //type: uint32
        YLeaf ringstationinlineerrors; //type: uint32
        YLeaf ringstationoutlineerrors; //type: uint32
        YLeaf ringstationinternalerrors; //type: uint32
        YLeaf ringstationinbursterrors; //type: uint32
        YLeaf ringstationoutbursterrors; //type: uint32
        YLeaf ringstationacerrors; //type: uint32
        YLeaf ringstationaborterrors; //type: uint32
        YLeaf ringstationlostframeerrors; //type: uint32
        YLeaf ringstationcongestionerrors; //type: uint32
        YLeaf ringstationframecopiederrors; //type: uint32
        YLeaf ringstationfrequencyerrors; //type: uint32
        YLeaf ringstationtokenerrors; //type: uint32
        YLeaf ringstationinbeaconerrors; //type: uint32
        YLeaf ringstationoutbeaconerrors; //type: uint32
        YLeaf ringstationinsertions; //type: uint32
        class RingstationstationstatusEnum;

}; // TokenRingRmonMib::Ringstationtable::Ringstationentry


class TokenRingRmonMib::Ringstationordertable : public Entity
{
    public:
        Ringstationordertable();
        ~Ringstationordertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ringstationorderentry; //type: TokenRingRmonMib::Ringstationordertable::Ringstationorderentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationordertable::Ringstationorderentry> > ringstationorderentry;
        
}; // TokenRingRmonMib::Ringstationordertable


class TokenRingRmonMib::Ringstationordertable::Ringstationorderentry : public Entity
{
    public:
        Ringstationorderentry();
        ~Ringstationorderentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ringstationorderifindex; //type: int32
        YLeaf ringstationorderorderindex; //type: int32
        YLeaf ringstationordermacaddress; //type: binary

}; // TokenRingRmonMib::Ringstationordertable::Ringstationorderentry


class TokenRingRmonMib::Ringstationconfigcontroltable : public Entity
{
    public:
        Ringstationconfigcontroltable();
        ~Ringstationconfigcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ringstationconfigcontrolentry; //type: TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry> > ringstationconfigcontrolentry;
        
}; // TokenRingRmonMib::Ringstationconfigcontroltable


class TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry : public Entity
{
    public:
        Ringstationconfigcontrolentry();
        ~Ringstationconfigcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ringstationconfigcontrolifindex; //type: int32
        YLeaf ringstationconfigcontrolmacaddress; //type: binary
        YLeaf ringstationconfigcontrolremove; //type: RingstationconfigcontrolremoveEnum
        YLeaf ringstationconfigcontrolupdatestats; //type: RingstationconfigcontrolupdatestatsEnum
        class RingstationconfigcontrolremoveEnum;
        class RingstationconfigcontrolupdatestatsEnum;

}; // TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry


class TokenRingRmonMib::Ringstationconfigtable : public Entity
{
    public:
        Ringstationconfigtable();
        ~Ringstationconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ringstationconfigentry; //type: TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry> > ringstationconfigentry;
        
}; // TokenRingRmonMib::Ringstationconfigtable


class TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry : public Entity
{
    public:
        Ringstationconfigentry();
        ~Ringstationconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ringstationconfigifindex; //type: int32
        YLeaf ringstationconfigmacaddress; //type: binary
        YLeaf ringstationconfigupdatetime; //type: uint32
        YLeaf ringstationconfiglocation; //type: binary
        YLeaf ringstationconfigmicrocode; //type: binary
        YLeaf ringstationconfiggroupaddress; //type: binary
        YLeaf ringstationconfigfunctionaladdress; //type: binary

}; // TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry


class TokenRingRmonMib::Sourceroutingstatstable : public Entity
{
    public:
        Sourceroutingstatstable();
        ~Sourceroutingstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sourceroutingstatsentry; //type: TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry> > sourceroutingstatsentry;
        
}; // TokenRingRmonMib::Sourceroutingstatstable


class TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry : public Entity
{
    public:
        Sourceroutingstatsentry();
        ~Sourceroutingstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sourceroutingstatsifindex; //type: int32
        YLeaf sourceroutingstatsringnumber; //type: int32
        YLeaf sourceroutingstatsinframes; //type: uint32
        YLeaf sourceroutingstatsoutframes; //type: uint32
        YLeaf sourceroutingstatsthroughframes; //type: uint32
        YLeaf sourceroutingstatsallroutesbroadcastframes; //type: uint32
        YLeaf sourceroutingstatssingleroutebroadcastframes; //type: uint32
        YLeaf sourceroutingstatsinoctets; //type: uint32
        YLeaf sourceroutingstatsoutoctets; //type: uint32
        YLeaf sourceroutingstatsthroughoctets; //type: uint32
        YLeaf sourceroutingstatsallroutesbroadcastoctets; //type: uint32
        YLeaf sourceroutingstatssingleroutesbroadcastoctets; //type: uint32
        YLeaf sourceroutingstatslocalllcframes; //type: uint32
        YLeaf sourceroutingstats1hopframes; //type: uint32
        YLeaf sourceroutingstats2hopsframes; //type: uint32
        YLeaf sourceroutingstats3hopsframes; //type: uint32
        YLeaf sourceroutingstats4hopsframes; //type: uint32
        YLeaf sourceroutingstats5hopsframes; //type: uint32
        YLeaf sourceroutingstats6hopsframes; //type: uint32
        YLeaf sourceroutingstats7hopsframes; //type: uint32
        YLeaf sourceroutingstats8hopsframes; //type: uint32
        YLeaf sourceroutingstatsmorethan8hopsframes; //type: uint32
        YLeaf sourceroutingstatsowner; //type: string
        YLeaf sourceroutingstatsstatus; //type: EntrystatusEnum

}; // TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry

class EntrystatusEnum : public Enum
{
    public:
        static const Enum::YLeaf valid;
        static const Enum::YLeaf createRequest;
        static const Enum::YLeaf underCreation;
        static const Enum::YLeaf invalid;

};

class TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::RingstationcontrolringstateEnum : public Enum
{
    public:
        static const Enum::YLeaf normalOperation;
        static const Enum::YLeaf ringPurgeState;
        static const Enum::YLeaf claimTokenState;
        static const Enum::YLeaf beaconFrameStreamingState;
        static const Enum::YLeaf beaconBitStreamingState;
        static const Enum::YLeaf beaconRingSignalLossState;
        static const Enum::YLeaf beaconSetRecoveryModeState;

};

class TokenRingRmonMib::Ringstationtable::Ringstationentry::RingstationstationstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf inactive;
        static const Enum::YLeaf forcedRemoval;

};

class TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::RingstationconfigcontrolremoveEnum : public Enum
{
    public:
        static const Enum::YLeaf stable;
        static const Enum::YLeaf removing;

};

class TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::RingstationconfigcontrolupdatestatsEnum : public Enum
{
    public:
        static const Enum::YLeaf stable;
        static const Enum::YLeaf updating;

};


}
}

#endif /* _TOKEN_RING_RMON_MIB_ */

