#ifndef _CISCO_IOS_XR_PMENGINE_OPER_8_
#define _CISCO_IOS_XR_PMENGINE_OPER_8_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_5.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords : public Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q : public Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin : public Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories : public Entity
{
    public:
        DwdmHour24OpticsHistories();
        ~DwdmHour24OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory> > dwdm_hour24_optics_history;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory : public Entity
{
    public:
        DwdmHour24OpticsHistory();
        ~DwdmHour24OpticsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class DwdmHour24OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances> dwdm_hour24_optics_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances : public Entity
{
    public:
        DwdmHour24OpticsTimeLineInstances();
        ~DwdmHour24OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance> > dwdm_hour24_optics_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance : public Entity
{
    public:
        DwdmHour24OpticsTimeLineInstance();
        ~DwdmHour24OpticsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow> rx_sig_pow;


}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc : public Entity
{
    public:
        LbcPc();
        ~LbcPc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt : public Entity
{
    public:
        Opt();
        ~Opt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr : public Entity
{
    public:
        Opr();
        ~Opr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd : public Entity
{
    public:
        Cd();
        ~Cd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd : public Entity
{
    public:
        Dgd();
        ~Dgd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd : public Entity
{
    public:
        Pmd();
        ~Pmd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr : public Entity
{
    public:
        Osnr();
        ~Osnr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength : public Entity
{
    public:
        CenterWavelength();
        ~CenterWavelength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl : public Entity
{
    public:
        Pdl();
        ~Pdl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr : public Entity
{
    public:
        Pcr();
        ~Pcr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn : public Entity
{
    public:
        Pn();
        ~Pn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow : public Entity
{
    public:
        RxSigPow();
        ~RxSigPow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff : public Entity
{
    public:
        LowSigFreqOff();
        ~LowSigFreqOff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::StmHistory : public Entity
{
    public:
        StmHistory();
        ~StmHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmPortHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories> stm_port_histories;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories : public Entity
{
    public:
        StmPortHistories();
        ~StmPortHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmPortHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory> > stm_port_history;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory : public Entity
{
    public:
        StmPortHistory();
        ~StmPortHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class StmHour24History; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History
        class StmMinute15History; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History> stm_hour24_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History> stm_minute15_history;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History : public Entity
{
    public:
        StmHour24History();
        ~StmHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories> stm_hour24stm_histories;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories : public Entity
{
    public:
        StmHour24StmHistories();
        ~StmHour24StmHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory> > stm_hour24stm_history;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory : public Entity
{
    public:
        StmHour24StmHistory();
        ~StmHour24StmHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class StmHour24StmTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances> stm_hour24stm_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances : public Entity
{
    public:
        StmHour24StmTimeLineInstances();
        ~StmHour24StmTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmHour24StmTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance> > stm_hour24stm_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance : public Entity
{
    public:
        StmHour24StmTimeLineInstance();
        ~StmHour24StmTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string

        class Section; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line> line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section> section;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf section_status; //type: int32

        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs> section_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs> section_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs : public Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs : public Entity
{
    public:
        SectionEsRs();
        ~SectionEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs : public Entity
{
    public:
        SectionBbEs();
        ~SectionBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs : public Entity
{
    public:
        SectionBbeRs();
        ~SectionBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs : public Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs : public Entity
{
    public:
        SectionSesRs();
        ~SectionSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs : public Entity
{
    public:
        SectionUaSs();
        ~SectionUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs : public Entity
{
    public:
        SectionEBs();
        ~SectionEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf line_status; //type: int32

        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs
        class LineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs
        class LineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs> line_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs> line_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs : public Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs : public Entity
{
    public:
        LineEsRs();
        ~LineEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs : public Entity
{
    public:
        LineBbEs();
        ~LineBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs : public Entity
{
    public:
        LineBbeRs();
        ~LineBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs : public Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs : public Entity
{
    public:
        LineSesRs();
        ~LineSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs : public Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs : public Entity
{
    public:
        LineEBs();
        ~LineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine : public Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs : public Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs : public Entity
{
    public:
        FarEndLineEsRs();
        ~FarEndLineEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs : public Entity
{
    public:
        FarEndLineEbbEs();
        ~FarEndLineEbbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs : public Entity
{
    public:
        FarEndLineBbeRs();
        ~FarEndLineBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs : public Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs : public Entity
{
    public:
        FarEndLineSesRs();
        ~FarEndLineSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs : public Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs : public Entity
{
    public:
        FarEndLineEBs();
        ~FarEndLineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History : public Entity
{
    public:
        StmMinute15History();
        ~StmMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15StmHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories> stm_minute15stm_histories;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories : public Entity
{
    public:
        StmMinute15StmHistories();
        ~StmMinute15StmHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15StmHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory> > stm_minute15stm_history;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory : public Entity
{
    public:
        StmMinute15StmHistory();
        ~StmMinute15StmHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class StmMinute15StmTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances> stm_minute15stm_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances : public Entity
{
    public:
        StmMinute15StmTimeLineInstances();
        ~StmMinute15StmTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StmMinute15StmTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance> > stm_minute15stm_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance : public Entity
{
    public:
        StmMinute15StmTimeLineInstance();
        ~StmMinute15StmTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string

        class Section; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line> line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section> section;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf section_status; //type: int32

        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs> section_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs> section_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs : public Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs : public Entity
{
    public:
        SectionEsRs();
        ~SectionEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs : public Entity
{
    public:
        SectionBbEs();
        ~SectionBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs : public Entity
{
    public:
        SectionBbeRs();
        ~SectionBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs : public Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs : public Entity
{
    public:
        SectionSesRs();
        ~SectionSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs : public Entity
{
    public:
        SectionUaSs();
        ~SectionUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs : public Entity
{
    public:
        SectionEBs();
        ~SectionEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf line_status; //type: int32

        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs
        class LineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs
        class LineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs> line_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs> line_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs : public Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs : public Entity
{
    public:
        LineEsRs();
        ~LineEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs : public Entity
{
    public:
        LineBbEs();
        ~LineBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs : public Entity
{
    public:
        LineBbeRs();
        ~LineBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs : public Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs : public Entity
{
    public:
        LineSesRs();
        ~LineSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs : public Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs : public Entity
{
    public:
        LineEBs();
        ~LineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine : public Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;


}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs : public Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs : public Entity
{
    public:
        FarEndLineEsRs();
        ~FarEndLineEsRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs : public Entity
{
    public:
        FarEndLineEbbEs();
        ~FarEndLineEbbEs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs : public Entity
{
    public:
        FarEndLineBbeRs();
        ~FarEndLineBbeRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs : public Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs : public Entity
{
    public:
        FarEndLineSesRs();
        ~FarEndLineSesRs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs : public Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs : public Entity
{
    public:
        FarEndLineEBs();
        ~FarEndLineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs


class PerformanceManagementHistory::Global::Periodic::OduHistory : public Entity
{
    public:
        OduHistory();
        ~OduHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories> odu_port_histories;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories : public Entity
{
    public:
        OduPortHistories();
        ~OduPortHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory> > odu_port_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory : public Entity
{
    public:
        OduPortHistory();
        ~OduPortHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class OduHour24History; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History
        class OduMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History> odu_hour24_history;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History> odu_minute15_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History : public Entity
{
    public:
        OduHour24History();
        ~OduHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24GfpHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories
        class OduHour24PrbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories
        class OduHour24OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories> odu_hour24gfp_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories> odu_hour24otn_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories> odu_hour24prbs_histories;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories : public Entity
{
    public:
        OduHour24GfpHistories();
        ~OduHour24GfpHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24GfpHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory> > odu_hour24gfp_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory : public Entity
{
    public:
        OduHour24GfpHistory();
        ~OduHour24GfpHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OduHour24GfpTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances> odu_hour24gfp_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances : public Entity
{
    public:
        OduHour24GfpTimeLineInstances();
        ~OduHour24GfpTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24GfpTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance> > odu_hour24gfp_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance : public Entity
{
    public:
        OduHour24GfpTimeLineInstance();
        ~OduHour24GfpTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class RxBitErr; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr
        class RxInvTyp; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp
        class RxCrc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc
        class RxLfd; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd
        class RxCsf; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr> rx_bit_err;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc> rx_crc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf> rx_csf;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp> rx_inv_typ;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd> rx_lfd;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr : public Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxBitErr


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp : public Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxInvTyp


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc : public Entity
{
    public:
        RxCrc();
        ~RxCrc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCrc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd : public Entity
{
    public:
        RxLfd();
        ~RxLfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxLfd


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf : public Entity
{
    public:
        RxCsf();
        ~RxCsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24GfpHistories::OduHour24GfpHistory::OduHour24GfpTimeLineInstances::OduHour24GfpTimeLineInstance::RxCsf


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories : public Entity
{
    public:
        OduHour24PrbsHistories();
        ~OduHour24PrbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24PrbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory> > odu_hour24prbs_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory : public Entity
{
    public:
        OduHour24PrbsHistory();
        ~OduHour24PrbsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OduHour24PrbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances> odu_hour24prbs_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances : public Entity
{
    public:
        OduHour24PrbsTimeLineInstances();
        ~OduHour24PrbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24PrbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance> > odu_hour24prbs_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance : public Entity
{
    public:
        OduHour24PrbsTimeLineInstance();
        ~OduHour24PrbsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf ebc; //type: uint64
        YLeaf found_count; //type: uint32
        YLeaf lost_count; //type: uint32
        YLeaf found_at_time; //type: string
        YLeaf lost_at_time; //type: string
        YLeaf conf_patt; //type: PmPrbsPatternEtEnum

        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt> rcv_patt;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt : public Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf rcv_patt; //type: PmPrbsPatternEtEnum



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories : public Entity
{
    public:
        OduHour24OtnHistories();
        ~OduHour24OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory> > odu_hour24otn_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory : public Entity
{
    public:
        OduHour24OtnHistory();
        ~OduHour24OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OduHour24OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances> odu_hour24otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances : public Entity
{
    public:
        OduHour24OtnTimeLineInstances();
        ~OduHour24OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduHour24OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance> > odu_hour24otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance : public Entity
{
    public:
        OduHour24OtnTimeLineInstance();
        ~OduHour24OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History : public Entity
{
    public:
        OduMinute15History();
        ~OduMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15PrbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories
        class OduMinute15GfpHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories
        class OduMinute15OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories> odu_minute15gfp_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories> odu_minute15otn_histories;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories> odu_minute15prbs_histories;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories : public Entity
{
    public:
        OduMinute15PrbsHistories();
        ~OduMinute15PrbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15PrbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory> > odu_minute15prbs_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory : public Entity
{
    public:
        OduMinute15PrbsHistory();
        ~OduMinute15PrbsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OduMinute15PrbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances> odu_minute15prbs_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances : public Entity
{
    public:
        OduMinute15PrbsTimeLineInstances();
        ~OduMinute15PrbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15PrbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance> > odu_minute15prbs_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance : public Entity
{
    public:
        OduMinute15PrbsTimeLineInstance();
        ~OduMinute15PrbsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf ebc; //type: uint64
        YLeaf found_count; //type: uint32
        YLeaf lost_count; //type: uint32
        YLeaf found_at_time; //type: string
        YLeaf lost_at_time; //type: string
        YLeaf conf_patt; //type: PmPrbsPatternEtEnum

        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt> rcv_patt;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt : public Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf rcv_patt; //type: PmPrbsPatternEtEnum



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories : public Entity
{
    public:
        OduMinute15GfpHistories();
        ~OduMinute15GfpHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15GfpHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory> > odu_minute15gfp_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory : public Entity
{
    public:
        OduMinute15GfpHistory();
        ~OduMinute15GfpHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OduMinute15GfpTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances> odu_minute15gfp_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances : public Entity
{
    public:
        OduMinute15GfpTimeLineInstances();
        ~OduMinute15GfpTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15GfpTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance> > odu_minute15gfp_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance : public Entity
{
    public:
        OduMinute15GfpTimeLineInstance();
        ~OduMinute15GfpTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class RxBitErr; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr
        class RxInvTyp; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp
        class RxCrc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc
        class RxLfd; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd
        class RxCsf; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr> rx_bit_err;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc> rx_crc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf> rx_csf;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp> rx_inv_typ;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd> rx_lfd;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr : public Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp : public Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc : public Entity
{
    public:
        RxCrc();
        ~RxCrc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd : public Entity
{
    public:
        RxLfd();
        ~RxLfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf : public Entity
{
    public:
        RxCsf();
        ~RxCsf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories : public Entity
{
    public:
        OduMinute15OtnHistories();
        ~OduMinute15OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory> > odu_minute15otn_history;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory : public Entity
{
    public:
        OduMinute15OtnHistory();
        ~OduMinute15OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32

        class OduMinute15OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances> odu_minute15otn_time_line_instances;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances : public Entity
{
    public:
        OduMinute15OtnTimeLineInstances();
        ~OduMinute15OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OduMinute15OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance> > odu_minute15otn_time_line_instance;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance : public Entity
{
    public:
        OduMinute15OtnTimeLineInstance();
        ~OduMinute15OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe> uas_ne;


}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_8_ */

