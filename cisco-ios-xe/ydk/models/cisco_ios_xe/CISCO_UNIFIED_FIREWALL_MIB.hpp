#ifndef _CISCO_UNIFIED_FIREWALL_MIB_
#define _CISCO_UNIFIED_FIREWALL_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_UNIFIED_FIREWALL_MIB {

class CISCOUNIFIEDFIREWALLMIB : public ydk::Entity
{
    public:
        CISCOUNIFIEDFIREWALLMIB();
        ~CISCOUNIFIEDFIREWALLMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class Cufwconnectionglobals; //type: CISCOUNIFIEDFIREWALLMIB::Cufwconnectionglobals
        class Cufwconnectionresources; //type: CISCOUNIFIEDFIREWALLMIB::Cufwconnectionresources
        class Cufwconnectionreportsettings; //type: CISCOUNIFIEDFIREWALLMIB::Cufwconnectionreportsettings
        class Cufwapplinspectiongrp; //type: CISCOUNIFIEDFIREWALLMIB::Cufwapplinspectiongrp
        class Cufwurlfilterglobals; //type: CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterglobals
        class Cufwurlfilterresourceusage; //type: CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterresourceusage
        class Cufwaaicglobals; //type: CISCOUNIFIEDFIREWALLMIB::Cufwaaicglobals
        class Cufwaaichttpprotocolstats; //type: CISCOUNIFIEDFIREWALLMIB::Cufwaaichttpprotocolstats
        class Cufwl2Fwglobals; //type: CISCOUNIFIEDFIREWALLMIB::Cufwl2Fwglobals
        class Cufwnotifcntlgrp; //type: CISCOUNIFIEDFIREWALLMIB::Cufwnotifcntlgrp
        class Cufwconnsummarytable; //type: CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable
        class Cufwappconnsummarytable; //type: CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable
        class Cufwpolicyconnsummarytable; //type: CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable
        class Cufwpolicyappconnsummarytable; //type: CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable
        class Cufwinspectiontable; //type: CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable
        class Cufwurlfservertable; //type: CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable

        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwaaicglobals> cufwaaicglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwaaichttpprotocolstats> cufwaaichttpprotocolstats;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable> cufwappconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwapplinspectiongrp> cufwapplinspectiongrp;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwconnectionglobals> cufwconnectionglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwconnectionreportsettings> cufwconnectionreportsettings;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwconnectionresources> cufwconnectionresources;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable> cufwconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable> cufwinspectiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwl2Fwglobals> cufwl2fwglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwnotifcntlgrp> cufwnotifcntlgrp;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable> cufwpolicyappconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable> cufwpolicyconnsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterglobals> cufwurlfilterglobals;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterresourceusage> cufwurlfilterresourceusage;
        std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable> cufwurlfservertable;
        
}; // CISCOUNIFIEDFIREWALLMIB


class CISCOUNIFIEDFIREWALLMIB::Cufwaaicglobals : public ydk::Entity
{
    public:
        Cufwaaicglobals();
        ~Cufwaaicglobals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwaaicglobalnumbadprotocolops; //type: uint64
        ydk::YLeaf cufwaaicglobalnumbadpdusize; //type: uint64
        ydk::YLeaf cufwaaicglobalnumbadportrange; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::Cufwaaicglobals


class CISCOUNIFIEDFIREWALLMIB::Cufwaaichttpprotocolstats : public ydk::Entity
{
    public:
        Cufwaaichttpprotocolstats();
        ~Cufwaaichttpprotocolstats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwaaichttpnumbadprotocolops; //type: uint64
        ydk::YLeaf cufwaaichttpnumbadpdusize; //type: uint64
        ydk::YLeaf cufwaaichttpnumtunneledconns; //type: uint64
        ydk::YLeaf cufwaaichttpnumlargeuris; //type: uint64
        ydk::YLeaf cufwaaichttpnumbadcontent; //type: uint64
        ydk::YLeaf cufwaaichttpnummismatchcontent; //type: uint64
        ydk::YLeaf cufwaaichttpnumdoubleencodedpkts; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::Cufwaaichttpprotocolstats


class CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable : public ydk::Entity
{
    public:
        Cufwappconnsummarytable();
        ~Cufwappconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cufwappconnsummaryentry; //type: CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable::Cufwappconnsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable::Cufwappconnsummaryentry> > cufwappconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable


class CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable::Cufwappconnsummaryentry : public ydk::Entity
{
    public:
        Cufwappconnsummaryentry();
        ~Cufwappconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwappconnprotocol; //type: CFWApplicationProtocol
        ydk::YLeaf cufwappconnnumattempted; //type: uint64
        ydk::YLeaf cufwappconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwappconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwappconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwappconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwappconnnumactive; //type: uint32
        ydk::YLeaf cufwappconnnumaborted; //type: uint64
        ydk::YLeaf cufwappconnsetuprate1; //type: uint32
        ydk::YLeaf cufwappconnsetuprate5; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwappconnsummarytable::Cufwappconnsummaryentry


class CISCOUNIFIEDFIREWALLMIB::Cufwapplinspectiongrp : public ydk::Entity
{
    public:
        Cufwapplinspectiongrp();
        ~Cufwapplinspectiongrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwaiaudittrailenabled; //type: boolean
        ydk::YLeaf cufwaialertenabled; //type: boolean

}; // CISCOUNIFIEDFIREWALLMIB::Cufwapplinspectiongrp


class CISCOUNIFIEDFIREWALLMIB::Cufwconnectionglobals : public ydk::Entity
{
    public:
        Cufwconnectionglobals();
        ~Cufwconnectionglobals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwconnglobalnumattempted; //type: uint64
        ydk::YLeaf cufwconnglobalnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwconnglobalnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwconnglobalnumresdeclined; //type: uint64
        ydk::YLeaf cufwconnglobalnumhalfopen; //type: uint32
        ydk::YLeaf cufwconnglobalnumactive; //type: uint32
        ydk::YLeaf cufwconnglobalnumexpired; //type: uint64
        ydk::YLeaf cufwconnglobalnumaborted; //type: uint64
        ydk::YLeaf cufwconnglobalnumembryonic; //type: uint32
        ydk::YLeaf cufwconnglobalconnsetuprate1; //type: uint32
        ydk::YLeaf cufwconnglobalconnsetuprate5; //type: uint32
        ydk::YLeaf cufwconnglobalnumremoteaccess; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwconnectionglobals


class CISCOUNIFIEDFIREWALLMIB::Cufwconnectionreportsettings : public ydk::Entity
{
    public:
        Cufwconnectionreportsettings();
        ~Cufwconnectionreportsettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwconnreptappstats; //type: boolean
        ydk::YLeaf cufwconnreptappstatslastchanged; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwconnectionreportsettings


class CISCOUNIFIEDFIREWALLMIB::Cufwconnectionresources : public ydk::Entity
{
    public:
        Cufwconnectionresources();
        ~Cufwconnectionresources();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwconnresmemoryusage; //type: uint32
        ydk::YLeaf cufwconnresactiveconnmemoryusage; //type: uint32
        ydk::YLeaf cufwconnreshoconnmemoryusage; //type: uint32
        ydk::YLeaf cufwconnresembrconnmemoryusage; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwconnectionresources


class CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable : public ydk::Entity
{
    public:
        Cufwconnsummarytable();
        ~Cufwconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cufwconnsummaryentry; //type: CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable::Cufwconnsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable::Cufwconnsummaryentry> > cufwconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable


class CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable::Cufwconnsummaryentry : public ydk::Entity
{
    public:
        Cufwconnsummaryentry();
        ~Cufwconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwconnprotocol; //type: CFWNetworkProtocol
        ydk::YLeaf cufwconnnumattempted; //type: uint64
        ydk::YLeaf cufwconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwconnnumactive; //type: uint32
        ydk::YLeaf cufwconnnumaborted; //type: uint64
        ydk::YLeaf cufwconnsetuprate1; //type: uint32
        ydk::YLeaf cufwconnsetuprate5; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwconnsummarytable::Cufwconnsummaryentry


class CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable : public ydk::Entity
{
    public:
        Cufwinspectiontable();
        ~Cufwinspectiontable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cufwinspectionentry; //type: CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable::Cufwinspectionentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable::Cufwinspectionentry> > cufwinspectionentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable


class CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable::Cufwinspectionentry : public ydk::Entity
{
    public:
        Cufwinspectionentry();
        ~Cufwinspectionentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwinspectionpolicyname; //type: binary
        ydk::YLeaf cufwinspectionprotocol; //type: CFWApplicationProtocol
        ydk::YLeaf cufwinspectionstatus; //type: boolean

}; // CISCOUNIFIEDFIREWALLMIB::Cufwinspectiontable::Cufwinspectionentry


class CISCOUNIFIEDFIREWALLMIB::Cufwl2Fwglobals : public ydk::Entity
{
    public:
        Cufwl2Fwglobals();
        ~Cufwl2Fwglobals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwl2globalenablestealthmode; //type: boolean
        ydk::YLeaf cufwl2globalarpcachesize; //type: int32
        ydk::YLeaf cufwl2globalenablearpinspection; //type: boolean
        ydk::YLeaf cufwl2globalnumarprequests; //type: uint64
        ydk::YLeaf cufwl2globalnumicmprequests; //type: uint64
        ydk::YLeaf cufwl2globalnumfloods; //type: uint64
        ydk::YLeaf cufwl2globalnumdrops; //type: uint64
        ydk::YLeaf cufwl2globalarpoverflowrate5; //type: uint32
        ydk::YLeaf cufwl2globalnumbadarpresponses; //type: uint64
        ydk::YLeaf cufwl2globalnumspoofedarpresps; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::Cufwl2Fwglobals


class CISCOUNIFIEDFIREWALLMIB::Cufwnotifcntlgrp : public ydk::Entity
{
    public:
        Cufwnotifcntlgrp();
        ~Cufwnotifcntlgrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwcntlurlfserverstatuschange; //type: boolean
        ydk::YLeaf cufwcntll2staticmacaddressmoved; //type: boolean

}; // CISCOUNIFIEDFIREWALLMIB::Cufwnotifcntlgrp


class CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable : public ydk::Entity
{
    public:
        Cufwpolicyappconnsummarytable();
        ~Cufwpolicyappconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cufwpolicyappconnsummaryentry; //type: CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry> > cufwpolicyappconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable


class CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry : public ydk::Entity
{
    public:
        Cufwpolicyappconnsummaryentry();
        ~Cufwpolicyappconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwpolappconnpolicy; //type: binary
        ydk::YLeaf cufwpolappconnpolicytargettype; //type: CFWPolicyTargetType
        ydk::YLeaf cufwpolappconnpolicytarget; //type: binary
        ydk::YLeaf cufwpolappconnprotocol; //type: CFWApplicationProtocol
        ydk::YLeaf cufwpolappconnnumattempted; //type: uint64
        ydk::YLeaf cufwpolappconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwpolappconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwpolappconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwpolappconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwpolappconnnumactive; //type: uint32
        ydk::YLeaf cufwpolappconnnumaborted; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::Cufwpolicyappconnsummarytable::Cufwpolicyappconnsummaryentry


class CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable : public ydk::Entity
{
    public:
        Cufwpolicyconnsummarytable();
        ~Cufwpolicyconnsummarytable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cufwpolicyconnsummaryentry; //type: CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry> > cufwpolicyconnsummaryentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable


class CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry : public ydk::Entity
{
    public:
        Cufwpolicyconnsummaryentry();
        ~Cufwpolicyconnsummaryentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwpolconnpolicy; //type: binary
        ydk::YLeaf cufwpolconnpolicytargettype; //type: CFWPolicyTargetType
        ydk::YLeaf cufwpolconnpolicytarget; //type: binary
        ydk::YLeaf cufwpolconnprotocol; //type: CFWNetworkProtocol
        ydk::YLeaf cufwpolconnnumattempted; //type: uint64
        ydk::YLeaf cufwpolconnnumsetupsaborted; //type: uint64
        ydk::YLeaf cufwpolconnnumpolicydeclined; //type: uint64
        ydk::YLeaf cufwpolconnnumresdeclined; //type: uint64
        ydk::YLeaf cufwpolconnnumhalfopen; //type: uint32
        ydk::YLeaf cufwpolconnnumactive; //type: uint32
        ydk::YLeaf cufwpolconnnumaborted; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::Cufwpolicyconnsummarytable::Cufwpolicyconnsummaryentry


class CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterglobals : public ydk::Entity
{
    public:
        Cufwurlfilterglobals();
        ~Cufwurlfilterglobals();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwurlffunctionenabled; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumprocessed; //type: uint64
        ydk::YLeaf cufwurlfrequestsprocrate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsprocrate5; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumallowed; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumdenied; //type: uint64
        ydk::YLeaf cufwurlfrequestsdeniedrate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsdeniedrate5; //type: uint32
        ydk::YLeaf cufwurlfrequestsnumcacheallowed; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumcachedenied; //type: uint64
        ydk::YLeaf cufwurlfallowmodereqnumallowed; //type: uint64
        ydk::YLeaf cufwurlfallowmodereqnumdenied; //type: uint64
        ydk::YLeaf cufwurlfrequestsnumresdropped; //type: uint64
        ydk::YLeaf cufwurlfrequestsresdroprate1; //type: uint32
        ydk::YLeaf cufwurlfrequestsresdroprate5; //type: uint32
        ydk::YLeaf cufwurlfnumservertimeouts; //type: uint64
        ydk::YLeaf cufwurlfnumserverretries; //type: uint64
        ydk::YLeaf cufwurlfresponsesnumlate; //type: uint64
        ydk::YLeaf cufwurlfurlaccrespsnumresdropped; //type: uint64

}; // CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterglobals


class CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterresourceusage : public ydk::Entity
{
    public:
        Cufwurlfilterresourceusage();
        ~Cufwurlfilterresourceusage();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwurlfrestotalrequestcachesize; //type: uint32
        ydk::YLeaf cufwurlfrestotalrespcachesize; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwurlfilterresourceusage


class CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable : public ydk::Entity
{
    public:
        Cufwurlfservertable();
        ~Cufwurlfservertable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Cufwurlfserverentry; //type: CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable::Cufwurlfserverentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_UNIFIED_FIREWALL_MIB::CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable::Cufwurlfserverentry> > cufwurlfserverentry;
        
}; // CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable


class CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable::Cufwurlfserverentry : public ydk::Entity
{
    public:
        Cufwurlfserverentry();
        ~Cufwurlfserverentry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cufwurlfserveraddrtype; //type: InetAddressType
        ydk::YLeaf cufwurlfserveraddress; //type: binary
        ydk::YLeaf cufwurlfserverport; //type: uint16
        ydk::YLeaf cufwurlfservervendor; //type: CFWUrlfVendorId
        ydk::YLeaf cufwurlfserverstatus; //type: CFWUrlServerStatus
        ydk::YLeaf cufwurlfserverreqsnumprocessed; //type: uint64
        ydk::YLeaf cufwurlfserverreqsnumallowed; //type: uint64
        ydk::YLeaf cufwurlfserverreqsnumdenied; //type: uint64
        ydk::YLeaf cufwurlfservernumtimeouts; //type: uint64
        ydk::YLeaf cufwurlfservernumretries; //type: uint64
        ydk::YLeaf cufwurlfserverrespsnumreceived; //type: uint64
        ydk::YLeaf cufwurlfserverrespsnumlate; //type: uint64
        ydk::YLeaf cufwurlfserveravgresptime1; //type: uint32
        ydk::YLeaf cufwurlfserveravgresptime5; //type: uint32

}; // CISCOUNIFIEDFIREWALLMIB::Cufwurlfservertable::Cufwurlfserverentry


}
}

#endif /* _CISCO_UNIFIED_FIREWALL_MIB_ */

