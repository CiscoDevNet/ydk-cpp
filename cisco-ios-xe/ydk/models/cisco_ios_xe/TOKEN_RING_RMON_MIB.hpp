#ifndef _TOKEN_RING_RMON_MIB_
#define _TOKEN_RING_RMON_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace TOKEN_RING_RMON_MIB {

class TokenRingRmonMib : public ydk::Entity
{
    public:
        TokenRingRmonMib();
        ~TokenRingRmonMib();

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


class TokenRingRmonMib::Tokenringmlstatstable : public ydk::Entity
{
    public:
        Tokenringmlstatstable();
        ~Tokenringmlstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tokenringmlstatsentry; //type: TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry> > tokenringmlstatsentry;
        
}; // TokenRingRmonMib::Tokenringmlstatstable


class TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry : public ydk::Entity
{
    public:
        Tokenringmlstatsentry();
        ~Tokenringmlstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tokenringmlstatsindex; //type: int32
        ydk::YLeaf tokenringmlstatsdatasource; //type: string
        ydk::YLeaf tokenringmlstatsdropevents; //type: uint32
        ydk::YLeaf tokenringmlstatsmacoctets; //type: uint32
        ydk::YLeaf tokenringmlstatsmacpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsringpurgeevents; //type: uint32
        ydk::YLeaf tokenringmlstatsringpurgepkts; //type: uint32
        ydk::YLeaf tokenringmlstatsbeaconevents; //type: uint32
        ydk::YLeaf tokenringmlstatsbeacontime; //type: int32
        ydk::YLeaf tokenringmlstatsbeaconpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsclaimtokenevents; //type: uint32
        ydk::YLeaf tokenringmlstatsclaimtokenpkts; //type: uint32
        ydk::YLeaf tokenringmlstatsnaunchanges; //type: uint32
        ydk::YLeaf tokenringmlstatslineerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsinternalerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsbursterrors; //type: uint32
        ydk::YLeaf tokenringmlstatsacerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsaborterrors; //type: uint32
        ydk::YLeaf tokenringmlstatslostframeerrors; //type: uint32
        ydk::YLeaf tokenringmlstatscongestionerrors; //type: uint32
        ydk::YLeaf tokenringmlstatsframecopiederrors; //type: uint32
        ydk::YLeaf tokenringmlstatsfrequencyerrors; //type: uint32
        ydk::YLeaf tokenringmlstatstokenerrors; //type: uint32
        ydk::YLeaf tokenringmlstatssofterrorreports; //type: uint32
        ydk::YLeaf tokenringmlstatsringpollevents; //type: uint32
        ydk::YLeaf tokenringmlstatsowner; //type: string
        ydk::YLeaf tokenringmlstatsstatus; //type: Entrystatus
        ydk::YLeaf tokenringmlstatsdroppedframes; //type: uint32
        ydk::YLeaf tokenringmlstatscreatetime; //type: uint32

}; // TokenRingRmonMib::Tokenringmlstatstable::Tokenringmlstatsentry


class TokenRingRmonMib::Tokenringpstatstable : public ydk::Entity
{
    public:
        Tokenringpstatstable();
        ~Tokenringpstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tokenringpstatsentry; //type: TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry> > tokenringpstatsentry;
        
}; // TokenRingRmonMib::Tokenringpstatstable


class TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry : public ydk::Entity
{
    public:
        Tokenringpstatsentry();
        ~Tokenringpstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tokenringpstatsindex; //type: int32
        ydk::YLeaf tokenringpstatsdatasource; //type: string
        ydk::YLeaf tokenringpstatsdropevents; //type: uint32
        ydk::YLeaf tokenringpstatsdataoctets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatabroadcastpkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatamulticastpkts; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts18to63octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts64to127octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts128to255octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts256to511octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts512to1023octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts1024to2047octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts2048to4095octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts4096to8191octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapkts8192to18000octets; //type: uint32
        ydk::YLeaf tokenringpstatsdatapktsgreaterthan18000octets; //type: uint32
        ydk::YLeaf tokenringpstatsowner; //type: string
        ydk::YLeaf tokenringpstatsstatus; //type: Entrystatus
        ydk::YLeaf tokenringpstatsdroppedframes; //type: uint32
        ydk::YLeaf tokenringpstatscreatetime; //type: uint32

}; // TokenRingRmonMib::Tokenringpstatstable::Tokenringpstatsentry


class TokenRingRmonMib::Tokenringmlhistorytable : public ydk::Entity
{
    public:
        Tokenringmlhistorytable();
        ~Tokenringmlhistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tokenringmlhistoryentry; //type: TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry> > tokenringmlhistoryentry;
        
}; // TokenRingRmonMib::Tokenringmlhistorytable


class TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry : public ydk::Entity
{
    public:
        Tokenringmlhistoryentry();
        ~Tokenringmlhistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tokenringmlhistoryindex; //type: int32
        ydk::YLeaf tokenringmlhistorysampleindex; //type: int32
        ydk::YLeaf tokenringmlhistoryintervalstart; //type: uint32
        ydk::YLeaf tokenringmlhistorydropevents; //type: uint32
        ydk::YLeaf tokenringmlhistorymacoctets; //type: uint32
        ydk::YLeaf tokenringmlhistorymacpkts; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpurgeevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpurgepkts; //type: uint32
        ydk::YLeaf tokenringmlhistorybeaconevents; //type: uint32
        ydk::YLeaf tokenringmlhistorybeacontime; //type: int32
        ydk::YLeaf tokenringmlhistorybeaconpkts; //type: uint32
        ydk::YLeaf tokenringmlhistoryclaimtokenevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryclaimtokenpkts; //type: uint32
        ydk::YLeaf tokenringmlhistorynaunchanges; //type: uint32
        ydk::YLeaf tokenringmlhistorylineerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryinternalerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorybursterrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryacerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryaborterrors; //type: uint32
        ydk::YLeaf tokenringmlhistorylostframeerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorycongestionerrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryframecopiederrors; //type: uint32
        ydk::YLeaf tokenringmlhistoryfrequencyerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorytokenerrors; //type: uint32
        ydk::YLeaf tokenringmlhistorysofterrorreports; //type: uint32
        ydk::YLeaf tokenringmlhistoryringpollevents; //type: uint32
        ydk::YLeaf tokenringmlhistoryactivestations; //type: int32

}; // TokenRingRmonMib::Tokenringmlhistorytable::Tokenringmlhistoryentry


class TokenRingRmonMib::Tokenringphistorytable : public ydk::Entity
{
    public:
        Tokenringphistorytable();
        ~Tokenringphistorytable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tokenringphistoryentry; //type: TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry> > tokenringphistoryentry;
        
}; // TokenRingRmonMib::Tokenringphistorytable


class TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry : public ydk::Entity
{
    public:
        Tokenringphistoryentry();
        ~Tokenringphistoryentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tokenringphistoryindex; //type: int32
        ydk::YLeaf tokenringphistorysampleindex; //type: int32
        ydk::YLeaf tokenringphistoryintervalstart; //type: uint32
        ydk::YLeaf tokenringphistorydropevents; //type: uint32
        ydk::YLeaf tokenringphistorydataoctets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts; //type: uint32
        ydk::YLeaf tokenringphistorydatabroadcastpkts; //type: uint32
        ydk::YLeaf tokenringphistorydatamulticastpkts; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts18to63octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts64to127octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts128to255octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts256to511octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts512to1023octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts1024to2047octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts2048to4095octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts4096to8191octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapkts8192to18000octets; //type: uint32
        ydk::YLeaf tokenringphistorydatapktsgreaterthan18000octets; //type: uint32

}; // TokenRingRmonMib::Tokenringphistorytable::Tokenringphistoryentry


class TokenRingRmonMib::Ringstationcontroltable : public ydk::Entity
{
    public:
        Ringstationcontroltable();
        ~Ringstationcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ringstationcontrolentry; //type: TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry> > ringstationcontrolentry;
        
}; // TokenRingRmonMib::Ringstationcontroltable


class TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry : public ydk::Entity
{
    public:
        Ringstationcontrolentry();
        ~Ringstationcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ringstationcontrolifindex; //type: int32
        ydk::YLeaf ringstationcontroltablesize; //type: int32
        ydk::YLeaf ringstationcontrolactivestations; //type: int32
        ydk::YLeaf ringstationcontrolringstate; //type: Ringstationcontrolringstate
        ydk::YLeaf ringstationcontrolbeaconsender; //type: binary
        ydk::YLeaf ringstationcontrolbeaconnaun; //type: binary
        ydk::YLeaf ringstationcontrolactivemonitor; //type: binary
        ydk::YLeaf ringstationcontrolorderchanges; //type: uint32
        ydk::YLeaf ringstationcontrolowner; //type: string
        ydk::YLeaf ringstationcontrolstatus; //type: Entrystatus
        ydk::YLeaf ringstationcontroldroppedframes; //type: uint32
        ydk::YLeaf ringstationcontrolcreatetime; //type: uint32
        class Ringstationcontrolringstate;

}; // TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry


class TokenRingRmonMib::Ringstationtable : public ydk::Entity
{
    public:
        Ringstationtable();
        ~Ringstationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ringstationentry; //type: TokenRingRmonMib::Ringstationtable::Ringstationentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationtable::Ringstationentry> > ringstationentry;
        
}; // TokenRingRmonMib::Ringstationtable


class TokenRingRmonMib::Ringstationtable::Ringstationentry : public ydk::Entity
{
    public:
        Ringstationentry();
        ~Ringstationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ringstationifindex; //type: int32
        ydk::YLeaf ringstationmacaddress; //type: binary
        ydk::YLeaf ringstationlastnaun; //type: binary
        ydk::YLeaf ringstationstationstatus; //type: Ringstationstationstatus
        ydk::YLeaf ringstationlastentertime; //type: uint32
        ydk::YLeaf ringstationlastexittime; //type: uint32
        ydk::YLeaf ringstationduplicateaddresses; //type: uint32
        ydk::YLeaf ringstationinlineerrors; //type: uint32
        ydk::YLeaf ringstationoutlineerrors; //type: uint32
        ydk::YLeaf ringstationinternalerrors; //type: uint32
        ydk::YLeaf ringstationinbursterrors; //type: uint32
        ydk::YLeaf ringstationoutbursterrors; //type: uint32
        ydk::YLeaf ringstationacerrors; //type: uint32
        ydk::YLeaf ringstationaborterrors; //type: uint32
        ydk::YLeaf ringstationlostframeerrors; //type: uint32
        ydk::YLeaf ringstationcongestionerrors; //type: uint32
        ydk::YLeaf ringstationframecopiederrors; //type: uint32
        ydk::YLeaf ringstationfrequencyerrors; //type: uint32
        ydk::YLeaf ringstationtokenerrors; //type: uint32
        ydk::YLeaf ringstationinbeaconerrors; //type: uint32
        ydk::YLeaf ringstationoutbeaconerrors; //type: uint32
        ydk::YLeaf ringstationinsertions; //type: uint32
        class Ringstationstationstatus;

}; // TokenRingRmonMib::Ringstationtable::Ringstationentry


class TokenRingRmonMib::Ringstationordertable : public ydk::Entity
{
    public:
        Ringstationordertable();
        ~Ringstationordertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ringstationorderentry; //type: TokenRingRmonMib::Ringstationordertable::Ringstationorderentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationordertable::Ringstationorderentry> > ringstationorderentry;
        
}; // TokenRingRmonMib::Ringstationordertable


class TokenRingRmonMib::Ringstationordertable::Ringstationorderentry : public ydk::Entity
{
    public:
        Ringstationorderentry();
        ~Ringstationorderentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ringstationorderifindex; //type: int32
        ydk::YLeaf ringstationorderorderindex; //type: int32
        ydk::YLeaf ringstationordermacaddress; //type: binary

}; // TokenRingRmonMib::Ringstationordertable::Ringstationorderentry


class TokenRingRmonMib::Ringstationconfigcontroltable : public ydk::Entity
{
    public:
        Ringstationconfigcontroltable();
        ~Ringstationconfigcontroltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ringstationconfigcontrolentry; //type: TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry> > ringstationconfigcontrolentry;
        
}; // TokenRingRmonMib::Ringstationconfigcontroltable


class TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry : public ydk::Entity
{
    public:
        Ringstationconfigcontrolentry();
        ~Ringstationconfigcontrolentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ringstationconfigcontrolifindex; //type: int32
        ydk::YLeaf ringstationconfigcontrolmacaddress; //type: binary
        ydk::YLeaf ringstationconfigcontrolremove; //type: Ringstationconfigcontrolremove
        ydk::YLeaf ringstationconfigcontrolupdatestats; //type: Ringstationconfigcontrolupdatestats
        class Ringstationconfigcontrolremove;
        class Ringstationconfigcontrolupdatestats;

}; // TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry


class TokenRingRmonMib::Ringstationconfigtable : public ydk::Entity
{
    public:
        Ringstationconfigtable();
        ~Ringstationconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ringstationconfigentry; //type: TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry> > ringstationconfigentry;
        
}; // TokenRingRmonMib::Ringstationconfigtable


class TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry : public ydk::Entity
{
    public:
        Ringstationconfigentry();
        ~Ringstationconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ringstationconfigifindex; //type: int32
        ydk::YLeaf ringstationconfigmacaddress; //type: binary
        ydk::YLeaf ringstationconfigupdatetime; //type: uint32
        ydk::YLeaf ringstationconfiglocation; //type: binary
        ydk::YLeaf ringstationconfigmicrocode; //type: binary
        ydk::YLeaf ringstationconfiggroupaddress; //type: binary
        ydk::YLeaf ringstationconfigfunctionaladdress; //type: binary

}; // TokenRingRmonMib::Ringstationconfigtable::Ringstationconfigentry


class TokenRingRmonMib::Sourceroutingstatstable : public ydk::Entity
{
    public:
        Sourceroutingstatstable();
        ~Sourceroutingstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sourceroutingstatsentry; //type: TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry

        std::vector<std::shared_ptr<TOKEN_RING_RMON_MIB::TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry> > sourceroutingstatsentry;
        
}; // TokenRingRmonMib::Sourceroutingstatstable


class TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry : public ydk::Entity
{
    public:
        Sourceroutingstatsentry();
        ~Sourceroutingstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sourceroutingstatsifindex; //type: int32
        ydk::YLeaf sourceroutingstatsringnumber; //type: int32
        ydk::YLeaf sourceroutingstatsinframes; //type: uint32
        ydk::YLeaf sourceroutingstatsoutframes; //type: uint32
        ydk::YLeaf sourceroutingstatsthroughframes; //type: uint32
        ydk::YLeaf sourceroutingstatsallroutesbroadcastframes; //type: uint32
        ydk::YLeaf sourceroutingstatssingleroutebroadcastframes; //type: uint32
        ydk::YLeaf sourceroutingstatsinoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsoutoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsthroughoctets; //type: uint32
        ydk::YLeaf sourceroutingstatsallroutesbroadcastoctets; //type: uint32
        ydk::YLeaf sourceroutingstatssingleroutesbroadcastoctets; //type: uint32
        ydk::YLeaf sourceroutingstatslocalllcframes; //type: uint32
        ydk::YLeaf sourceroutingstats1hopframes; //type: uint32
        ydk::YLeaf sourceroutingstats2hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats3hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats4hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats5hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats6hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats7hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstats8hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstatsmorethan8hopsframes; //type: uint32
        ydk::YLeaf sourceroutingstatsowner; //type: string
        ydk::YLeaf sourceroutingstatsstatus; //type: Entrystatus
        ydk::YLeaf sourceroutingstatsdroppedframes; //type: uint32
        ydk::YLeaf sourceroutingstatscreatetime; //type: uint32

}; // TokenRingRmonMib::Sourceroutingstatstable::Sourceroutingstatsentry

class Entrystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf createRequest;
        static const ydk::Enum::YLeaf underCreation;
        static const ydk::Enum::YLeaf invalid;

};

class TokenRingRmonMib::Ringstationcontroltable::Ringstationcontrolentry::Ringstationcontrolringstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normalOperation;
        static const ydk::Enum::YLeaf ringPurgeState;
        static const ydk::Enum::YLeaf claimTokenState;
        static const ydk::Enum::YLeaf beaconFrameStreamingState;
        static const ydk::Enum::YLeaf beaconBitStreamingState;
        static const ydk::Enum::YLeaf beaconRingSignalLossState;
        static const ydk::Enum::YLeaf beaconSetRecoveryModeState;

};

class TokenRingRmonMib::Ringstationtable::Ringstationentry::Ringstationstationstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf inactive;
        static const ydk::Enum::YLeaf forcedRemoval;

};

class TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolremove : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stable;
        static const ydk::Enum::YLeaf removing;

};

class TokenRingRmonMib::Ringstationconfigcontroltable::Ringstationconfigcontrolentry::Ringstationconfigcontrolupdatestats : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stable;
        static const ydk::Enum::YLeaf updating;

};


}
}

#endif /* _TOKEN_RING_RMON_MIB_ */

