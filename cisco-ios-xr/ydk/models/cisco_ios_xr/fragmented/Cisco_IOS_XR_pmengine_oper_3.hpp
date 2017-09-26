#ifndef _CISCO_IOS_XR_PMENGINE_OPER_3_
#define _CISCO_IOS_XR_PMENGINE_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun : public ydk::Entity
{
    public:
        InPktsOverrun();
        ~InPktsOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci : public ydk::Entity
{
    public:
        InPktsUnknownSci();
        ~InPktsUnknownSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUnknownSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged : public ydk::Entity
{
    public:
        InPktsUntagged();
        ~InPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::InPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged : public ydk::Entity
{
    public:
        OutPktsUntagged();
        ~OutPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyifs::MacsecHour24Secyif::OutPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes : public ydk::Entity
{
    public:
        MacsecHour24Secyrxes();
        ~MacsecHour24Secyrxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Secyrx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx> > macsec_hour24secyrx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx : public ydk::Entity
{
    public:
        MacsecHour24Secyrx();
        ~MacsecHour24Secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed
        class InPktsLate; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate
        class InPktsOk; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk
        class InPktsInvalid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa> in_pkts_unused_sa;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed : public ydk::Entity
{
    public:
        InPktsDelayed();
        ~InPktsDelayed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsDelayed


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid : public ydk::Entity
{
    public:
        InPktsInvalid();
        ~InPktsInvalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsInvalid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate : public ydk::Entity
{
    public:
        InPktsLate();
        ~InPktsLate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsLate


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa : public ydk::Entity
{
    public:
        InPktsNotUsingSa();
        ~InPktsNotUsingSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotUsingSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid : public ydk::Entity
{
    public:
        InPktsNotValid();
        ~InPktsNotValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsNotValid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk : public ydk::Entity
{
    public:
        InPktsOk();
        ~InPktsOk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsOk


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked : public ydk::Entity
{
    public:
        InPktsUnchecked();
        ~InPktsUnchecked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnchecked


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit : public ydk::Entity
{
    public:
        InPktsUntaggedHit();
        ~InPktsUntaggedHit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUntaggedHit


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa : public ydk::Entity
{
    public:
        InPktsUnusedSa();
        ~InPktsUnusedSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secyrxes::MacsecHour24Secyrx::InPktsUnusedSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes : public ydk::Entity
{
    public:
        MacsecHour24Secytxes();
        ~MacsecHour24Secytxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24Secytx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx> > macsec_hour24secytx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx : public ydk::Entity
{
    public:
        MacsecHour24Secytx();
        ~MacsecHour24Secytx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class OutPktsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted : public ydk::Entity
{
    public:
        OutPktsEncrypted();
        ~OutPktsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected : public ydk::Entity
{
    public:
        OutPktsProtected();
        ~OutPktsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecHour24::MacsecHour24Secytxes::MacsecHour24Secytx::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15 : public ydk::Entity
{
    public:
        MacsecMinute15();
        ~MacsecMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15Secyifs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs
        class MacsecMinute15Secyrxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes
        class MacsecMinute15Secytxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes
        class MacsecMinute15EtherS; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS> macsec_minute15_ether_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs> macsec_minute15secyifs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes> macsec_minute15secyrxes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes> macsec_minute15secytxes;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS : public ydk::Entity
{
    public:
        MacsecMinute15EtherS();
        ~MacsecMinute15EtherS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15Ether; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether> > macsec_minute15_ether;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether : public ydk::Entity
{
    public:
        MacsecMinute15Ether();
        ~MacsecMinute15Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt
        class StatPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt
        class OctetStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat
        class OversizePktStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat
        class JabberStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat
        class Ether64Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt
        class InMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt
        class InBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt
        class TxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt
        class IfInErrors; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors
        class IfInOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets
        class InPauseFrame; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame
        class InGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes
        class In8021QFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts
        class InDropOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun
        class InDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther
        class InMibGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant
        class InMibJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber
        class InMibcrc; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc
        class InErrorCollisions; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort
        class OutDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther
        class OutErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther
        class InErrorGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant
        class InErrorRunt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments
        class InErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther
        class InPkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil
        class TxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt
        class TxFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments
        class TxJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber
        class TxBadFcs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil> tx_util;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet : public ydk::Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether10241518Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet : public ydk::Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether128255Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet : public ydk::Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether256511Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet : public ydk::Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether5121023Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets : public ydk::Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether64Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet : public ydk::Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Ether65127Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt : public ydk::Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatBroadcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt : public ydk::Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatMulticastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt : public ydk::Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::EtherStatUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat : public ydk::Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::FcsErrorsStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors : public ydk::Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInErrors


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets : public ydk::Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::IfInOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames : public ydk::Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::In8021QFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt : public ydk::Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InBcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort : public ydk::Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropAbort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac : public ydk::Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidDmac


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap : public ydk::Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidEncap


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan : public ydk::Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropInvalidVlan


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther : public ydk::Entity
{
    public:
        InDropOther();
        ~InDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun : public ydk::Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InDropOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorCollisions


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorGiant


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorJabbers


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther : public ydk::Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt : public ydk::Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorRunt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol : public ydk::Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InErrorSymbol


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes : public ydk::Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodBytes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts : public ydk::Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InGoodPkts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt : public ydk::Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant : public ydk::Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibGiant


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber : public ydk::Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc : public ydk::Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InMibcrc


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame : public ydk::Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPauseFrame


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet : public ydk::Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkt64Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets : public ydk::Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1024To1518Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets : public ydk::Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts128To255Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets : public ydk::Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts1519MaxOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets : public ydk::Entity
{
    public:
        InPkts256To511Octets();
        ~InPkts256To511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts256To511Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets : public ydk::Entity
{
    public:
        InPkts512To1023Octets();
        ~InPkts512To1023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts512To1023Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets : public ydk::Entity
{
    public:
        InPkts65To127Octets();
        ~InPkts65To127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InPkts65To127Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt : public ydk::Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::InUcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat : public ydk::Entity
{
    public:
        JabberStat();
        ~JabberStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::JabberStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat : public ydk::Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::LongFramesStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OctetStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames : public ydk::Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Out8021QFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt : public ydk::Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutBcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort : public ydk::Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropAbort


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther : public ydk::Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun : public ydk::Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutDropUnderrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther : public ydk::Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutErrorOther


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes : public ydk::Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodBytes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts : public ydk::Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutGoodPkts


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt : public ydk::Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutMcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames : public ydk::Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPauseFrames


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets : public ydk::Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts10241518Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets : public ydk::Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts128255Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets : public ydk::Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts1519MaxOctets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets : public ydk::Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts256511Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets : public ydk::Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts5121023Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets : public ydk::Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutPkts65127Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt : public ydk::Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OutUcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet : public ydk::Entity
{
    public:
        Outpkt64Octet();
        ~Outpkt64Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::Outpkt64Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat : public ydk::Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::OversizePktStat


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil : public ydk::Entity
{
    public:
        RxUtil();
        ~RxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::RxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::StatPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs : public ydk::Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxBadFcs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments : public ydk::Entity
{
    public:
        TxFragments();
        ~TxFragments();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxFragments


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber : public ydk::Entity
{
    public:
        TxJabber();
        ~TxJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxJabber


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt : public ydk::Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxOversizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt : public ydk::Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt : public ydk::Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUndersizedPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil : public ydk::Entity
{
    public:
        TxUtil();
        ~TxUtil();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15EtherS::MacsecMinute15Ether::TxUtil


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs : public ydk::Entity
{
    public:
        MacsecMinute15Secyifs();
        ~MacsecMinute15Secyifs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15Secyif; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif> > macsec_minute15secyif;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif : public ydk::Entity
{
    public:
        MacsecMinute15Secyif();
        ~MacsecMinute15Secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged> out_pkts_untagged;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag : public ydk::Entity
{
    public:
        InPktsBadTag();
        ~InPktsBadTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsBadTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci : public ydk::Entity
{
    public:
        InPktsNoSci();
        ~InPktsNoSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag : public ydk::Entity
{
    public:
        InPktsNoTag();
        ~InPktsNoTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsNoTag


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun : public ydk::Entity
{
    public:
        InPktsOverrun();
        ~InPktsOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsOverrun


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci : public ydk::Entity
{
    public:
        InPktsUnknownSci();
        ~InPktsUnknownSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUnknownSci


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged : public ydk::Entity
{
    public:
        InPktsUntagged();
        ~InPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::InPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged : public ydk::Entity
{
    public:
        OutPktsUntagged();
        ~OutPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyifs::MacsecMinute15Secyif::OutPktsUntagged


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes : public ydk::Entity
{
    public:
        MacsecMinute15Secyrxes();
        ~MacsecMinute15Secyrxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15Secyrx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx> > macsec_minute15secyrx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx : public ydk::Entity
{
    public:
        MacsecMinute15Secyrx();
        ~MacsecMinute15Secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed
        class InPktsLate; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate
        class InPktsOk; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk
        class InPktsInvalid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa> in_pkts_unused_sa;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsDecrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InOctetsValidated


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed : public ydk::Entity
{
    public:
        InPktsDelayed();
        ~InPktsDelayed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsDelayed


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid : public ydk::Entity
{
    public:
        InPktsInvalid();
        ~InPktsInvalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsInvalid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate : public ydk::Entity
{
    public:
        InPktsLate();
        ~InPktsLate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsLate


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa : public ydk::Entity
{
    public:
        InPktsNotUsingSa();
        ~InPktsNotUsingSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotUsingSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid : public ydk::Entity
{
    public:
        InPktsNotValid();
        ~InPktsNotValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsNotValid


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk : public ydk::Entity
{
    public:
        InPktsOk();
        ~InPktsOk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsOk


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked : public ydk::Entity
{
    public:
        InPktsUnchecked();
        ~InPktsUnchecked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnchecked


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit : public ydk::Entity
{
    public:
        InPktsUntaggedHit();
        ~InPktsUntaggedHit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUntaggedHit


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa : public ydk::Entity
{
    public:
        InPktsUnusedSa();
        ~InPktsUnusedSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secyrxes::MacsecMinute15Secyrx::InPktsUnusedSa


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes : public ydk::Entity
{
    public:
        MacsecMinute15Secytxes();
        ~MacsecMinute15Secytxes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15Secytx; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx> > macsec_minute15secytx;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx : public ydk::Entity
{
    public:
        MacsecMinute15Secytx();
        ~MacsecMinute15Secytx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class OutPktsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutOctetsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted : public ydk::Entity
{
    public:
        OutPktsEncrypted();
        ~OutPktsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsEncrypted


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected : public ydk::Entity
{
    public:
        OutPktsProtected();
        ~OutPktsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsProtected


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecMinute15::MacsecMinute15Secytxes::MacsecMinute15Secytx::OutPktsTooLong


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30 : public ydk::Entity
{
    public:
        MacsecSecond30();
        ~MacsecSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30Secyifs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs
        class MacsecSecond30Secyrxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes
        class MacsecSecond30EtherS; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS
        class MacsecSecond30Secytxes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS> macsec_second30_ether_s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyifs> macsec_second30secyifs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secyrxes> macsec_second30secyrxes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30Secytxes> macsec_second30secytxes;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS : public ydk::Entity
{
    public:
        MacsecSecond30EtherS();
        ~MacsecSecond30EtherS();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecSecond30Ether; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether> > macsec_second30_ether;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether : public ydk::Entity
{
    public:
        MacsecSecond30Ether();
        ~MacsecSecond30Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt
        class StatPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt
        class OctetStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat
        class OversizePktStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat
        class JabberStat; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat
        class Ether64Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt
        class InMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt
        class InBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt
        class TxPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt
        class IfInErrors; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors
        class IfInOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets
        class InPauseFrame; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame
        class InGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes
        class In8021QFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts
        class InDropOverrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun
        class InDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther
        class InMibGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant
        class InMibJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber
        class InMibcrc; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc
        class InErrorCollisions; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort
        class OutDropOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther
        class OutErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther
        class InErrorGiant; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant
        class InErrorRunt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments
        class InErrorOther; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther
        class InPkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil
        class TxUtil; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt
        class TxFragments; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments
        class TxJabber; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber
        class TxBadFcs; //type: PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::TxUtil> tx_util;
        
}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet : public ydk::Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether10241518Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet : public ydk::Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether128255Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet : public ydk::Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether256511Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet : public ydk::Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether5121023Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets : public ydk::Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether64Octets


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet : public ydk::Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::Ether65127Octet


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt : public ydk::Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatBroadcastPkt


class PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt : public ydk::Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagement::Macsec::MacsecPorts::MacsecPort::MacsecCurrent::MacsecSecond30::MacsecSecond30EtherS::MacsecSecond30Ether::EtherStatMulticastPkt


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_3_ */

