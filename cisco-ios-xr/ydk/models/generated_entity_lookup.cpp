#include "Cisco_IOS_XR_Ethernet_SPAN_cfg.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_datatypes.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_oper.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_subscriber_cfg.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg.hpp"
#include "Cisco_IOS_XR_aaa_locald_admin_cfg.hpp"
#include "Cisco_IOS_XR_aaa_locald_cfg.hpp"
#include "Cisco_IOS_XR_aaa_locald_oper.hpp"
#include "Cisco_IOS_XR_aaa_protocol_radius_cfg.hpp"
#include "Cisco_IOS_XR_aaa_protocol_radius_oper.hpp"
#include "Cisco_IOS_XR_aaa_tacacs_cfg.hpp"
#include "Cisco_IOS_XR_alarmgr_server_oper.hpp"
#include "Cisco_IOS_XR_asic_errors_oper.hpp"
#include "Cisco_IOS_XR_asr9k_asic_errors_oper.hpp"
#include "Cisco_IOS_XR_asr9k_fsi_oper.hpp"
#include "Cisco_IOS_XR_asr9k_lpts_oper.hpp"
#include "Cisco_IOS_XR_asr9k_netflow_oper.hpp"
#include "Cisco_IOS_XR_asr9k_np_oper.hpp"
#include "Cisco_IOS_XR_asr9k_prm_cfg.hpp"
#include "Cisco_IOS_XR_asr9k_qos_oper.hpp"
#include "Cisco_IOS_XR_asr9k_sc_envmon_admin_oper.hpp"
#include "Cisco_IOS_XR_asr9k_sc_envmon_oper.hpp"
#include "Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper.hpp"
#include "Cisco_IOS_XR_asr9k_sc_invmgr_oper.hpp"
#include "Cisco_IOS_XR_atm_common_datatypes.hpp"
#include "Cisco_IOS_XR_atm_vcm_cfg.hpp"
#include "Cisco_IOS_XR_atm_vcm_oper.hpp"
#include "Cisco_IOS_XR_bundlemgr_cfg.hpp"
#include "Cisco_IOS_XR_bundlemgr_oper.hpp"
#include "Cisco_IOS_XR_cdp_cfg.hpp"
#include "Cisco_IOS_XR_cdp_oper.hpp"
#include "Cisco_IOS_XR_cfgmgr_rollback_act.hpp"
#include "Cisco_IOS_XR_clns_isis_cfg.hpp"
#include "Cisco_IOS_XR_clns_isis_datatypes.hpp"
#include "Cisco_IOS_XR_clns_isis_oper.hpp"
#include "Cisco_IOS_XR_cmproxy_oper.hpp"
#include "Cisco_IOS_XR_common_acl_datatypes.hpp"
#include "Cisco_IOS_XR_config_cfgmgr_exec_oper.hpp"
#include "Cisco_IOS_XR_config_mda_cfg.hpp"
#include "Cisco_IOS_XR_controller_optics_cfg.hpp"
#include "Cisco_IOS_XR_controller_optics_oper.hpp"
#include "Cisco_IOS_XR_controller_otu_cfg.hpp"
#include "Cisco_IOS_XR_controller_otu_oper.hpp"
#include "Cisco_IOS_XR_crypto_macsec_mka_cfg.hpp"
#include "Cisco_IOS_XR_crypto_macsec_mka_oper.hpp"
#include "Cisco_IOS_XR_crypto_macsec_pl_oper.hpp"
#include "Cisco_IOS_XR_crypto_macsec_secy_oper.hpp"
#include "Cisco_IOS_XR_crypto_sam_cfg.hpp"
#include "Cisco_IOS_XR_crypto_sam_oper.hpp"
#include "Cisco_IOS_XR_crypto_ssh_oper.hpp"
#include "Cisco_IOS_XR_dnx_driver_oper.hpp"
#include "Cisco_IOS_XR_dnx_netflow_oper.hpp"
#include "Cisco_IOS_XR_dnx_port_mapper_oper.hpp"
#include "Cisco_IOS_XR_drivers_media_eth_cfg.hpp"
#include "Cisco_IOS_XR_drivers_media_eth_oper.hpp"
#include "Cisco_IOS_XR_dwdm_ui_cfg.hpp"
#include "Cisco_IOS_XR_dwdm_ui_oper.hpp"
#include "Cisco_IOS_XR_es_acl_cfg.hpp"
#include "Cisco_IOS_XR_es_acl_datatypes.hpp"
#include "Cisco_IOS_XR_es_acl_oper.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_cfg.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_datatypes.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_oper.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_cfg.hpp"
#include "Cisco_IOS_XR_ethernet_link_oam_oper.hpp"
#include "Cisco_IOS_XR_ethernet_lldp_cfg.hpp"
#include "Cisco_IOS_XR_ethernet_lldp_oper.hpp"
#include "Cisco_IOS_XR_fia_hw_profile_cfg.hpp"
#include "Cisco_IOS_XR_fia_internal_tcam_oper.hpp"
#include "Cisco_IOS_XR_fib_common_cfg.hpp"
#include "Cisco_IOS_XR_fib_common_oper.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_npu_stats_oper.hpp"
#include "Cisco_IOS_XR_fretta_bcm_dpa_resources_oper.hpp"
#include "Cisco_IOS_XR_group_cfg.hpp"
#include "Cisco_IOS_XR_ha_eem_cfg.hpp"
#include "Cisco_IOS_XR_ha_eem_policy_oper.hpp"
#include "Cisco_IOS_XR_icpe_infra_cfg.hpp"
#include "Cisco_IOS_XR_icpe_infra_oper.hpp"
#include "Cisco_IOS_XR_iedge4710_cfg.hpp"
#include "Cisco_IOS_XR_iedge4710_oper.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg.hpp"
#include "Cisco_IOS_XR_ifmgr_oper.hpp"
#include "Cisco_IOS_XR_infra_alarm_logger_datatypes.hpp"
#include "Cisco_IOS_XR_infra_alarm_logger_oper.hpp"
#include "Cisco_IOS_XR_infra_correlator_oper.hpp"
#include "Cisco_IOS_XR_infra_dumper_cfg.hpp"
#include "Cisco_IOS_XR_infra_infra_cfg.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_cfg.hpp"
#include "Cisco_IOS_XR_infra_infra_clock_linux_cfg.hpp"
#include "Cisco_IOS_XR_infra_infra_locale_cfg.hpp"
#include "Cisco_IOS_XR_infra_ltrace_cfg.hpp"
#include "Cisco_IOS_XR_infra_objmgr_cfg.hpp"
#include "Cisco_IOS_XR_infra_objmgr_oper.hpp"
#include "Cisco_IOS_XR_infra_policymgr_cfg.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper.hpp"
#include "Cisco_IOS_XR_infra_rcmd_cfg.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper.hpp"
#include "Cisco_IOS_XR_infra_rmf_oper.hpp"
#include "Cisco_IOS_XR_infra_rsi_cfg.hpp"
#include "Cisco_IOS_XR_infra_rsi_oper.hpp"
#include "Cisco_IOS_XR_infra_sla_cfg.hpp"
#include "Cisco_IOS_XR_infra_sla_datatypes.hpp"
#include "Cisco_IOS_XR_infra_sla_oper.hpp"
#include "Cisco_IOS_XR_infra_statsd_cfg.hpp"
#include "Cisco_IOS_XR_infra_statsd_oper.hpp"
#include "Cisco_IOS_XR_infra_syslog_cfg.hpp"
#include "Cisco_IOS_XR_infra_syslog_oper.hpp"
#include "Cisco_IOS_XR_infra_tc_cfg.hpp"
#include "Cisco_IOS_XR_infra_tc_oper.hpp"
#include "Cisco_IOS_XR_installmgr_admin_oper.hpp"
#include "Cisco_IOS_XR_invmgr_oper.hpp"
#include "Cisco_IOS_XR_ip_bfd_cfg.hpp"
#include "Cisco_IOS_XR_ip_bfd_oper.hpp"
#include "Cisco_IOS_XR_ip_domain_cfg.hpp"
#include "Cisco_IOS_XR_ip_domain_oper.hpp"
#include "Cisco_IOS_XR_ip_iarm_v4_oper.hpp"
#include "Cisco_IOS_XR_ip_iarm_v6_oper.hpp"
#include "Cisco_IOS_XR_ip_icmp_cfg.hpp"
#include "Cisco_IOS_XR_ip_iep_cfg.hpp"
#include "Cisco_IOS_XR_ip_iep_oper.hpp"
#include "Cisco_IOS_XR_ip_mobileip_cfg.hpp"
#include "Cisco_IOS_XR_ip_ntp_admin_oper.hpp"
#include "Cisco_IOS_XR_ip_ntp_cfg.hpp"
#include "Cisco_IOS_XR_ip_ntp_oper.hpp"
#include "Cisco_IOS_XR_ip_pfilter_oper.hpp"
#include "Cisco_IOS_XR_ip_rib_cfg.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv4_oper.hpp"
#include "Cisco_IOS_XR_ip_rib_ipv6_oper.hpp"
#include "Cisco_IOS_XR_ip_rsvp_cfg.hpp"
#include "Cisco_IOS_XR_ip_rsvp_oper.hpp"
#include "Cisco_IOS_XR_ip_sbfd_cfg.hpp"
#include "Cisco_IOS_XR_ip_sbfd_oper.hpp"
#include "Cisco_IOS_XR_ip_static_cfg.hpp"
#include "Cisco_IOS_XR_ip_tcp_cfg.hpp"
#include "Cisco_IOS_XR_ip_tcp_oper.hpp"
#include "Cisco_IOS_XR_ip_udp_cfg.hpp"
#include "Cisco_IOS_XR_ip_udp_oper.hpp"
#include "Cisco_IOS_XR_ipv4_acl_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_acl_datatypes.hpp"
#include "Cisco_IOS_XR_ipv4_acl_oper.hpp"
#include "Cisco_IOS_XR_ipv4_arp_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_arp_oper.hpp"
#include "Cisco_IOS_XR_ipv4_autorp_datatypes.hpp"
#include "Cisco_IOS_XR_ipv4_autorp_oper.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_datatypes.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper.hpp"
#include "Cisco_IOS_XR_ipv4_dhcpd_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_filesystems_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_hsrp_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_hsrp_oper.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper.hpp"
#include "Cisco_IOS_XR_ipv4_io_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_io_oper.hpp"
#include "Cisco_IOS_XR_ipv4_ma_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_ma_oper.hpp"
#include "Cisco_IOS_XR_ipv4_mfwd_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper.hpp"
#include "Cisco_IOS_XR_ipv4_pim_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper.hpp"
#include "Cisco_IOS_XR_ipv4_smiap_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_telnet_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_telnet_mgmt_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_cfg.hpp"
#include "Cisco_IOS_XR_ipv4_vrrp_oper.hpp"
#include "Cisco_IOS_XR_ipv6_acl_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_acl_datatypes.hpp"
#include "Cisco_IOS_XR_ipv6_acl_oper.hpp"
#include "Cisco_IOS_XR_ipv6_io_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_io_oper.hpp"
#include "Cisco_IOS_XR_ipv6_ma_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_ma_oper.hpp"
#include "Cisco_IOS_XR_ipv6_ma_subscriber_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_nd_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_nd_oper.hpp"
#include "Cisco_IOS_XR_ipv6_nd_subscriber_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_new_dhcpv6d_oper.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_oper.hpp"
#include "Cisco_IOS_XR_ipv6_smiap_cfg.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_cfg.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_datatypes.hpp"
#include "Cisco_IOS_XR_l2_eth_infra_oper.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg.hpp"
#include "Cisco_IOS_XR_l2vpn_oper.hpp"
#include "Cisco_IOS_XR_lib_keychain_cfg.hpp"
#include "Cisco_IOS_XR_lib_keychain_macsec_cfg.hpp"
#include "Cisco_IOS_XR_lib_keychain_oper.hpp"
#include "Cisco_IOS_XR_lib_mpp_cfg.hpp"
#include "Cisco_IOS_XR_lib_mpp_oper.hpp"
#include "Cisco_IOS_XR_linux_os_reboot_history_oper.hpp"
#include "Cisco_IOS_XR_lpts_lib_cfg.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_cfg.hpp"
#include "Cisco_IOS_XR_lpts_pre_ifib_oper.hpp"
#include "Cisco_IOS_XR_lpts_punt_flowtrap_cfg.hpp"
#include "Cisco_IOS_XR_macsec_ctrlr_oper.hpp"
#include "Cisco_IOS_XR_man_ems_cfg.hpp"
#include "Cisco_IOS_XR_man_ems_oper.hpp"
#include "Cisco_IOS_XR_man_netconf_cfg.hpp"
#include "Cisco_IOS_XR_man_xml_ttyagent_cfg.hpp"
#include "Cisco_IOS_XR_man_xml_ttyagent_oper.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_cfg.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_datatypes.hpp"
#include "Cisco_IOS_XR_manageability_object_tracking_oper.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_cfg.hpp"
#include "Cisco_IOS_XR_manageability_perfmgmt_oper.hpp"
#include "Cisco_IOS_XR_mpls_ldp_cfg.hpp"
#include "Cisco_IOS_XR_mpls_ldp_cfg_datatypes.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_datatypes.hpp"
#include "Cisco_IOS_XR_mpls_lsd_cfg.hpp"
#include "Cisco_IOS_XR_mpls_lsd_oper.hpp"
#include "Cisco_IOS_XR_mpls_oam_cfg.hpp"
#include "Cisco_IOS_XR_mpls_static_cfg.hpp"
#include "Cisco_IOS_XR_mpls_static_oper.hpp"
#include "Cisco_IOS_XR_mpls_te_cfg.hpp"
#include "Cisco_IOS_XR_mpls_te_datatypes.hpp"
#include "Cisco_IOS_XR_mpls_te_oper.hpp"
#include "Cisco_IOS_XR_mpls_vpn_oper.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_cfg.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_headless_oper.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_lldp_oper.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_oper.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_node_oper.hpp"
#include "Cisco_IOS_XR_ncs5500_coherent_portmode_oper.hpp"
#include "Cisco_IOS_XR_ncs5500_qos_oper.hpp"
#include "Cisco_IOS_XR_nto_misc_oper.hpp"
#include "Cisco_IOS_XR_nto_misc_shmem_oper.hpp"
#include "Cisco_IOS_XR_nto_misc_shprocmem_oper.hpp"
#include "Cisco_IOS_XR_openconfig_terminal_device_cfg.hpp"
#include "Cisco_IOS_XR_openconfig_terminal_device_oper.hpp"
#include "Cisco_IOS_XR_parser_cfg.hpp"
#include "Cisco_IOS_XR_patch_panel_cfg.hpp"
#include "Cisco_IOS_XR_pbr_oper.hpp"
#include "Cisco_IOS_XR_pbr_vservice_ea_oper.hpp"
#include "Cisco_IOS_XR_pbr_vservice_mgr_oper.hpp"
#include "Cisco_IOS_XR_pfi_im_cmd_oper.hpp"
#include "Cisco_IOS_XR_plat_chas_invmgr_oper.hpp"
#include "Cisco_IOS_XR_platform_pifib_oper.hpp"
#include "Cisco_IOS_XR_pmengine_cfg.hpp"
#include "Cisco_IOS_XR_pmengine_oper.hpp"
#include "Cisco_IOS_XR_policy_repository_cfg.hpp"
#include "Cisco_IOS_XR_policy_repository_oper.hpp"
#include "Cisco_IOS_XR_prm_server_oper.hpp"
#include "Cisco_IOS_XR_procmem_oper.hpp"
#include "Cisco_IOS_XR_qos_ma_bng_cfg.hpp"
#include "Cisco_IOS_XR_qos_ma_cfg.hpp"
#include "Cisco_IOS_XR_qos_ma_oper.hpp"
#include "Cisco_IOS_XR_rgmgr_cfg.hpp"
#include "Cisco_IOS_XR_rgmgr_oper.hpp"
#include "Cisco_IOS_XR_sdr_invmgr_diag_oper.hpp"
#include "Cisco_IOS_XR_sdr_invmgr_oper.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_cfg.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_oper.hpp"
#include "Cisco_IOS_XR_shellutil_cfg.hpp"
#include "Cisco_IOS_XR_shellutil_filesystem_oper.hpp"
#include "Cisco_IOS_XR_shellutil_oper.hpp"
#include "Cisco_IOS_XR_show_fpd_loc_ng_oper.hpp"
#include "Cisco_IOS_XR_skp_qos_oper.hpp"
#include "Cisco_IOS_XR_snmp_agent_cfg.hpp"
#include "Cisco_IOS_XR_snmp_agent_oper.hpp"
#include "Cisco_IOS_XR_snmp_ifmib_oper.hpp"
#include "Cisco_IOS_XR_snmp_test_trap_act.hpp"
#include "Cisco_IOS_XR_spirit_corehelper_cfg.hpp"
#include "Cisco_IOS_XR_spirit_install_instmgr_oper.hpp"
#include "Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg.hpp"
#include "Cisco_IOS_XR_syslog_act.hpp"
#include "Cisco_IOS_XR_telemetry_model_driven_cfg.hpp"
#include "Cisco_IOS_XR_telemetry_model_driven_oper.hpp"
#include "Cisco_IOS_XR_traffmon_netflow_cfg.hpp"
#include "Cisco_IOS_XR_tty_management_cmd_oper.hpp"
#include "Cisco_IOS_XR_tty_management_datatypes.hpp"
#include "Cisco_IOS_XR_tty_management_oper.hpp"
#include "Cisco_IOS_XR_tty_server_cfg.hpp"
#include "Cisco_IOS_XR_tty_server_oper.hpp"
#include "Cisco_IOS_XR_tty_vty_cfg.hpp"
#include "Cisco_IOS_XR_tunnel_nve_cfg.hpp"
#include "Cisco_IOS_XR_tunnel_nve_oper.hpp"
#include "Cisco_IOS_XR_types.hpp"
#include "Cisco_IOS_XR_upgrade_fpd_oper.hpp"
#include "Cisco_IOS_XR_vservice_cfg.hpp"
#include "Cisco_IOS_XR_wanphy_ui_cfg.hpp"
#include "Cisco_IOS_XR_wanphy_ui_oper.hpp"
#include "Cisco_IOS_XR_watchd_cfg.hpp"
#include "Cisco_IOS_XR_wd_cfg.hpp"
#include "Cisco_IOS_XR_wd_oper.hpp"
#include "Cisco_IOS_XR_wdsysmon_fd_oper.hpp"
#include "ydk/entity_lookup.hpp"
#include "ydk/path_api.hpp"
#include "ydk/types.hpp"
#include "ydk_ietf/ietf_syslog_types.hpp"

namespace ydk
{

void augment_lookup_tables()
{
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory"},std::make_unique<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-linux-os-reboot-history-oper:reboot-history"},std::make_unique<Cisco_IOS_XR_linux_os_reboot_history_oper::RebootHistory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-cfg:global-af"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::GlobalAf>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths"},std::make_unique<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery"},std::make_unique<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-upgrade-fpd-oper:fpd"},std::make_unique<Cisco_IOS_XR_upgrade_fpd_oper::Fpd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd"},std::make_unique<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template"},std::make_unique<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-ospf-oper:ospf"},std::make_unique<Cisco_IOS_XR_ipv4_ospf_oper::Ospf>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-oper:vrf-group"},std::make_unique<Cisco_IOS_XR_infra_rsi_oper::VrfGroup>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-new-dhcpv6d-oper:dhcpv6"},std::make_unique<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-sla-oper:sla-nodes"},std::make_unique<Cisco_IOS_XR_infra_sla_oper::SlaNodes>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lib-mpp-cfg:control-plane"},std::make_unique<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ifmgr-oper:interface-dampening"},std::make_unique<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-prm-server-oper:prm"},std::make_unique<Cisco_IOS_XR_prm_server_oper::Prm>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ha-eem-policy-oper:eem"},std::make_unique<Cisco_IOS_XR_ha_eem_policy_oper::Eem>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-tc-cfg:traffic-collector"},std::make_unique<Cisco_IOS_XR_infra_tc_cfg::TrafficCollector>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual"},std::make_unique<Cisco_IOS_XR_ipv4_smiap_cfg::Ipv4Virtual>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rsvp-oper:rsvp"},std::make_unique<Cisco_IOS_XR_ip_rsvp_oper::Rsvp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-ntp-cfg:ntp"},std::make_unique<Cisco_IOS_XR_ip_ntp_cfg::Ntp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy"},std::make_unique<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd"},std::make_unique<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-bgp-cfg:bgp"},std::make_unique<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global"},std::make_unique<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs1k-mxp-cfg:hardware-module"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-cfg:mpls-te"},std::make_unique<Cisco_IOS_XR_mpls_te_cfg::MplsTe>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm"},std::make_unique<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-bfd-cfg:bfd"},std::make_unique<Cisco_IOS_XR_ip_bfd_cfg::Bfd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger"},std::make_unique<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fia-internal-tcam-oper:controller"},std::make_unique<Cisco_IOS_XR_fia_internal_tcam_oper::Controller>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-qos-oper:platform-qos"},std::make_unique<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rcmd-cfg:router-convergence"},std::make_unique<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ha-eem-cfg:event-manager"},std::make_unique<Cisco_IOS_XR_ha_eem_cfg::EventManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-netflow-oper:net-flow"},std::make_unique<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd"},std::make_unique<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-udp-cfg:ip-udp"},std::make_unique<Cisco_IOS_XR_ip_udp_cfg::IpUdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-icpe-infra-cfg:nv-satellites"},std::make_unique<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-watchd-cfg:watchdog"},std::make_unique<Cisco_IOS_XR_watchd_cfg::Watchdog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::SelectiveVrfDownload>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-group-cfg:groups"},std::make_unique<Cisco_IOS_XR_group_cfg::Groups>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-macsec-secy-oper:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam"},std::make_unique<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-macsec-pl-oper:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-pim-oper:pim"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::Pim>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-iep-oper:explicit-paths"},std::make_unique<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-ntp-admin-oper:ntp"},std::make_unique<Cisco_IOS_XR_ip_ntp_admin_oper::Ntp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs1k-mxp-oper:hw-module"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-static-cfg:router-static"},std::make_unique<Cisco_IOS_XR_ip_static_cfg::RouterStatic>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats"},std::make_unique<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-dwdm-ui-oper:vtxp"},std::make_unique<Cisco_IOS_XR_dwdm_ui_oper::Vtxp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lib-keychain-cfg:keychains"},std::make_unique<Cisco_IOS_XR_lib_keychain_cfg::Keychains>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-alarmgr-server-oper:alarms"},std::make_unique<Cisco_IOS_XR_alarmgr_server_oper::Alarms>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-tcp-cfg:ip-tcp"},std::make_unique<Cisco_IOS_XR_ip_tcp_cfg::IpTcp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs1k-mxp-cfg:hardware-module"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_cfg::HardwareModule>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-infra-cfg:banners"},std::make_unique<Cisco_IOS_XR_infra_infra_cfg::Banners>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-statsd-oper:infra-statistics"},std::make_unique<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-bgp-oper:bgp"},std::make_unique<Cisco_IOS_XR_ipv4_bgp_oper::Bgp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-sc-envmon-admin-oper:environmental-monitoring"},std::make_unique<Cisco_IOS_XR_asr9k_sc_envmon_admin_oper::EnvironmentalMonitoring>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper:dpa"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fib-common-oper:fib"},std::make_unique<Cisco_IOS_XR_fib_common_oper::Fib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ethernet-cfm-oper:cfm"},std::make_unique<Cisco_IOS_XR_ethernet_cfm_oper::Cfm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration"},std::make_unique<Cisco_IOS_XR_ipv6_io_cfg::Ipv6Configuration>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm"},std::make_unique<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-sam-cfg:crypto"},std::make_unique<Cisco_IOS_XR_crypto_sam_cfg::Crypto>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fib-common-oper:fib"},std::make_unique<Cisco_IOS_XR_fib_common_oper::Fib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-ssh-oper:ssh"},std::make_unique<Cisco_IOS_XR_crypto_ssh_oper::Ssh>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-sla-oper:sla-nodes"},std::make_unique<Cisco_IOS_XR_infra_sla_oper::SlaNodes>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-icpe-infra-oper:nv-satellite"},std::make_unique<Cisco_IOS_XR_icpe_infra_oper::NvSatellite>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-static-oper:mpls-static"},std::make_unique<Cisco_IOS_XR_mpls_static_oper::MplsStatic>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lpts-lib-cfg:lpts"},std::make_unique<Cisco_IOS_XR_lpts_lib_cfg::Lpts>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-tty-vty-cfg:vty"},std::make_unique<Cisco_IOS_XR_tty_vty_cfg::Vty>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-cfg:vrf-groups"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::VrfGroups>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma"},std::make_unique<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rib-ipv4-oper:rib"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-igmp-oper:igmp"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_oper::Igmp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-qos-ma-cfg:qos"},std::make_unique<Cisco_IOS_XR_qos_ma_cfg::Qos>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6"},std::make_unique<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-manageability-object-tracking-cfg:object-trackings"},std::make_unique<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib-stdby"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining"},std::make_unique<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-filesystems-cfg:ftp"},std::make_unique<Cisco_IOS_XR_ipv4_filesystems_cfg::Ftp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-openconfig-terminal-device-cfg:logical-channels"},std::make_unique<Cisco_IOS_XR_openconfig_terminal_device_cfg::LogicalChannels>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists"},std::make_unique<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-ma-cfg:ipv4-network-global"},std::make_unique<Cisco_IOS_XR_ipv4_ma_cfg::Ipv4NetworkGlobal>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-spirit-corehelper-cfg:exception"},std::make_unique<Cisco_IOS_XR_spirit_corehelper_cfg::Exception>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-tc-oper:traffic-collector"},std::make_unique<Cisco_IOS_XR_infra_tc_oper::TrafficCollector>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-np-oper:hardware-module-np"},std::make_unique<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven"},std::make_unique<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven"},std::make_unique<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory"},std::make_unique<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-installmgr-admin-oper:install"},std::make_unique<Cisco_IOS_XR_installmgr_admin_oper::Install>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rcmd-cfg:router-convergence"},std::make_unique<Cisco_IOS_XR_infra_rcmd_cfg::RouterConvergence>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-tc-oper:traffic-collector"},std::make_unique<Cisco_IOS_XR_infra_tc_oper::TrafficCollector>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs5500-coherent-portmode-oper:controller-port-mode"},std::make_unique<Cisco_IOS_XR_ncs5500_coherent_portmode_oper::ControllerPortMode>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-ma-oper:ipv6-network"},std::make_unique<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-io-oper:ipv6-io"},std::make_unique<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-sc-envmon-admin-oper:environmental-monitoring"},std::make_unique<Cisco_IOS_XR_asr9k_sc_envmon_admin_oper::EnvironmentalMonitoring>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-cfg:mpls-te"},std::make_unique<Cisco_IOS_XR_mpls_te_cfg::MplsTe>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-vservice-cfg:vservice"},std::make_unique<Cisco_IOS_XR_vservice_cfg::Vservice>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-segment-routing-ms-oper:srms"},std::make_unique<Cisco_IOS_XR_segment_routing_ms_oper::Srms>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_mka_cfg::Macsec>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery"},std::make_unique<Cisco_IOS_XR_ipv6_nd_oper::Ipv6NodeDiscovery>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-cfg:evpn"},std::make_unique<Cisco_IOS_XR_l2vpn_cfg::Evpn>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-clns-isis-cfg:isis"},std::make_unique<Cisco_IOS_XR_clns_isis_cfg::Isis>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt"},std::make_unique<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-traffmon-netflow-cfg:net-flow"},std::make_unique<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-cdp-oper:cdp"},std::make_unique<Cisco_IOS_XR_cdp_oper::Cdp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-cfg:evpn"},std::make_unique<Cisco_IOS_XR_l2vpn_cfg::Evpn>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-nto-misc-shmem-oper:memory-summary"},std::make_unique<Cisco_IOS_XR_nto_misc_shmem_oper::MemorySummary>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent"},std::make_unique<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-arp-cfg:arp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_cfg::Arp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-pbr-oper:pbr"},std::make_unique<Cisco_IOS_XR_pbr_oper::Pbr>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fib-common-oper:fib-mpls"},std::make_unique<Cisco_IOS_XR_fib_common_oper::FibMpls>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-cfg:lacp"},std::make_unique<Cisco_IOS_XR_bundlemgr_cfg::Lacp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-skp-qos-oper:platform-qos"},std::make_unique<Cisco_IOS_XR_skp_qos_oper::PlatformQos>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-openconfig-terminal-device-cfg:optical-channels"},std::make_unique<Cisco_IOS_XR_openconfig_terminal_device_cfg::OpticalChannels>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-icmp-cfg:icmp"},std::make_unique<Cisco_IOS_XR_ip_icmp_cfg::Icmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor"},std::make_unique<Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-syslog-oper:logging"},std::make_unique<Cisco_IOS_XR_infra_syslog_oper::Logging>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-udp-oper:udp"},std::make_unique<Cisco_IOS_XR_ip_udp_oper::Udp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-qos-ma-cfg:qos"},std::make_unique<Cisco_IOS_XR_qos_ma_cfg::Qos>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-arp-cfg:arp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_cfg::Arp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-aaa-lib-cfg:aaa"},std::make_unique<Cisco_IOS_XR_aaa_lib_cfg::Aaa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp"},std::make_unique<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-wd-cfg:watchdog"},std::make_unique<Cisco_IOS_XR_wd_cfg::Watchdog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-watchd-cfg:watchdog"},std::make_unique<Cisco_IOS_XR_watchd_cfg::Watchdog>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib"},std::make_unique<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-dwdm-ui-oper:dwdm"},std::make_unique<Cisco_IOS_XR_dwdm_ui_oper::Dwdm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-snmp-agent-oper:snmp"},std::make_unique<Cisco_IOS_XR_snmp_agent_oper::Snmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ethernet-lldp-oper:lldp"},std::make_unique<Cisco_IOS_XR_ethernet_lldp_oper::Lldp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-macsec-mka-cfg:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_mka_cfg::Macsec>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-iedge4710-oper:subscriber"},std::make_unique<Cisco_IOS_XR_iedge4710_oper::Subscriber>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-igmp-cfg:mld"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_cfg::Mld>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-static-oper:mpls-static"},std::make_unique<Cisco_IOS_XR_mpls_static_oper::MplsStatic>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-igmp-oper:mld"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_oper::Mld>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager"},std::make_unique<Cisco_IOS_XR_iedge4710_cfg::IedgeLicenseManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-autorp-oper:auto-rp"},std::make_unique<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config"},std::make_unique<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-iep-cfg:ip-explicit-paths"},std::make_unique<Cisco_IOS_XR_ip_iep_cfg::IpExplicitPaths>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-controller-otu-oper:otu"},std::make_unique<Cisco_IOS_XR_controller_otu_oper::Otu>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib"},std::make_unique<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-aaa-locald-admin-cfg:aaa"},std::make_unique<Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rib-cfg:rib"},std::make_unique<Cisco_IOS_XR_ip_rib_cfg::Rib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ifmgr-oper:interface-dampening"},std::make_unique<Cisco_IOS_XR_ifmgr_oper::InterfaceDampening>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip"},std::make_unique<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg:dynamic-template"},std::make_unique<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fia-internal-tcam-oper:controller"},std::make_unique<Cisco_IOS_XR_fia_internal_tcam_oper::Controller>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-iedge4710-oper:iedge-license-manager"},std::make_unique<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-snmp-agent-oper:snmp"},std::make_unique<Cisco_IOS_XR_snmp_agent_oper::Snmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-iedge4710-oper:iedge-license-manager"},std::make_unique<Cisco_IOS_XR_iedge4710_oper::IedgeLicenseManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-tcp-cfg:ip-tcp"},std::make_unique<Cisco_IOS_XR_ip_tcp_cfg::IpTcp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-tunnel-nve-oper:nve"},std::make_unique<Cisco_IOS_XR_tunnel_nve_oper::Nve>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-oper:lacp-data"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::LacpData>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-icmp-cfg:icmp"},std::make_unique<Cisco_IOS_XR_ip_icmp_cfg::Icmp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-telnet-mgmt-cfg:telnet"},std::make_unique<Cisco_IOS_XR_ipv4_telnet_mgmt_cfg::Telnet>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-syslog-oper:syslog"},std::make_unique<Cisco_IOS_XR_infra_syslog_oper::Syslog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-lcac"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsLcac>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-io-oper:ipv4-network"},std::make_unique<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-wanphy-ui-oper:wanphy"},std::make_unique<Cisco_IOS_XR_wanphy_ui_oper::Wanphy>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fib-common-oper:fib-statistics"},std::make_unique<Cisco_IOS_XR_fib_common_oper::FibStatistics>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rcmd-oper:rcmd"},std::make_unique<Cisco_IOS_XR_infra_rcmd_oper::Rcmd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd-nodes"},std::make_unique<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-wdsysmon-fd-oper:system-monitoring"},std::make_unique<Cisco_IOS_XR_wdsysmon_fd_oper::SystemMonitoring>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-policy-repository-cfg:routing-policy"},std::make_unique<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager"},std::make_unique<Cisco_IOS_XR_rgmgr_oper::RedundancyGroupManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-oper:bundles"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::Bundles>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-oper:l2vpn"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::L2Vpn>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-ma-cfg:subscriber-pta"},std::make_unique<Cisco_IOS_XR_ipv4_ma_cfg::SubscriberPta>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session"},std::make_unique<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs5500-coherent-portmode-oper:controller-port-mode"},std::make_unique<Cisco_IOS_XR_ncs5500_coherent_portmode_oper::ControllerPortMode>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-sdr-invmgr-diag-oper:diag"},std::make_unique<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp"},std::make_unique<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-aaa-locald-admin-cfg:aaa"},std::make_unique<Cisco_IOS_XR_aaa_locald_admin_cfg::Aaa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp"},std::make_unique<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-segment-routing-ms-cfg:sr"},std::make_unique<Cisco_IOS_XR_segment_routing_ms_cfg::Sr>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-oper:l2vpnv2"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-dnx-netflow-oper:net-flow"},std::make_unique<Cisco_IOS_XR_dnx_netflow_oper::NetFlow>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-cfg:l2vpn"},std::make_unique<Cisco_IOS_XR_l2vpn_cfg::L2Vpn>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual"},std::make_unique<Cisco_IOS_XR_ipv6_smiap_cfg::Ipv6Virtual>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-acl-cfg:ipv4-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking"},std::make_unique<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-te-standby"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm"},std::make_unique<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper"},std::make_unique<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-oper:bundles"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::Bundles>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-igmp-cfg:amt"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_cfg::Amt>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-patch-panel-cfg:patch-panel"},std::make_unique<Cisco_IOS_XR_patch_panel_cfg::PatchPanel>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-atm-vcm-oper:atm-vcm"},std::make_unique<Cisco_IOS_XR_atm_vcm_oper::AtmVcm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-nto-misc-shprocmem-oper:processes-memory"},std::make_unique<Cisco_IOS_XR_nto_misc_shprocmem_oper::ProcessesMemory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-pbr-oper:pbr"},std::make_unique<Cisco_IOS_XR_pbr_oper::Pbr>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-pmengine-oper:performance-management-history"},std::make_unique<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-nto-misc-oper:memory-summary"},std::make_unique<Cisco_IOS_XR_nto_misc_oper::MemorySummary>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fib-common-oper:mpls-forwarding"},std::make_unique<Cisco_IOS_XR_fib_common_oper::MplsForwarding>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleLoadBalance>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-correlator-oper:suppression"},std::make_unique<Cisco_IOS_XR_infra_correlator_oper::Suppression>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-aaa-protocol-radius-oper:radius"},std::make_unique<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ifmgr-oper:interface-properties"},std::make_unique<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-oper:lacp-bundles"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::LacpBundles>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory"},std::make_unique<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-acl-oper:ipv4-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-correlator-oper:suppression"},std::make_unique<Cisco_IOS_XR_infra_correlator_oper::Suppression>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_lldp_oper::LldpSnoopData>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-infra-locale-cfg:locale"},std::make_unique<Cisco_IOS_XR_infra_infra_locale_cfg::Locale>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-statsd-oper:infra-statistics"},std::make_unique<Cisco_IOS_XR_infra_statsd_oper::InfraStatistics>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-new-dhcpv6d-oper:dhcpv6"},std::make_unique<Cisco_IOS_XR_ipv6_new_dhcpv6d_oper::Dhcpv6>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-pmengine-oper:performance-management"},std::make_unique<Cisco_IOS_XR_pmengine_oper::PerformanceManagement>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-np-oper:hardware-module-np"},std::make_unique<Cisco_IOS_XR_asr9k_np_oper::HardwareModuleNp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-config-cfgmgr-exec-oper:cfg-hist-gl"},std::make_unique<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs5500-coherent-node-oper:coherent"},std::make_unique<Cisco_IOS_XR_ncs5500_coherent_node_oper::Coherent>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-pfi-im-cmd-oper:interfaces"},std::make_unique<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-pim-oper:pim-ma"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::PimMa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fib-common-oper:fib-mpls"},std::make_unique<Cisco_IOS_XR_fib_common_oper::FibMpls>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-tcp-cfg:ip"},std::make_unique<Cisco_IOS_XR_ip_tcp_cfg::Ip>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-pim-oper:pim6-ma"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-wd-cfg:watchdog"},std::make_unique<Cisco_IOS_XR_wd_cfg::Watchdog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-policymgr-cfg:policy-manager"},std::make_unique<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-patch-panel-cfg:patch-panel"},std::make_unique<Cisco_IOS_XR_patch_panel_cfg::PatchPanel>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-dnx-driver-oper:fia"},std::make_unique<Cisco_IOS_XR_dnx_driver_oper::Fia>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-alarmgr-server-oper:alarms"},std::make_unique<Cisco_IOS_XR_alarmgr_server_oper::Alarms>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rmf-oper:redundancy"},std::make_unique<Cisco_IOS_XR_infra_rmf_oper::Redundancy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-pim-oper:pim6-ma"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-correlator-oper:correlator"},std::make_unique<Cisco_IOS_XR_infra_correlator_oper::Correlator>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-statsd-cfg:statistics"},std::make_unique<Cisco_IOS_XR_infra_statsd_cfg::Statistics>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-filesystems-cfg:ftp"},std::make_unique<Cisco_IOS_XR_ipv4_filesystems_cfg::Ftp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-controller-otu-oper:otu"},std::make_unique<Cisco_IOS_XR_controller_otu_oper::Otu>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-tcp-oper:tcp-connection"},std::make_unique<Cisco_IOS_XR_ip_tcp_oper::TcpConnection>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory"},std::make_unique<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-aaa-locald-oper:aaa"},std::make_unique<Cisco_IOS_XR_aaa_locald_oper::Aaa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-te"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsTe>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-invmgr-oper:inventory"},std::make_unique<Cisco_IOS_XR_invmgr_oper::Inventory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-static-cfg:mpls-static"},std::make_unique<Cisco_IOS_XR_mpls_static_cfg::MplsStatic>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-sdr-invmgr-oper:sdr-inventory"},std::make_unique<Cisco_IOS_XR_sdr_invmgr_oper::SdrInventory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-telnet-cfg:ipv6-telnet"},std::make_unique<Cisco_IOS_XR_ipv4_telnet_cfg::Ipv6Telnet>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-tp"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsTp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-sdr-invmgr-diag-oper:diag"},std::make_unique<Cisco_IOS_XR_sdr_invmgr_diag_oper::Diag>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp"},std::make_unique<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-nto-misc-oper:memory-summary"},std::make_unique<Cisco_IOS_XR_nto_misc_oper::MemorySummary>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-shellutil-cfg:host-names"},std::make_unique<Cisco_IOS_XR_shellutil_cfg::HostNames>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rsvp-cfg:rsvp"},std::make_unique<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-shellutil-oper:system-time"},std::make_unique<Cisco_IOS_XR_shellutil_oper::SystemTime>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcam"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcam>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-spirit-install-instmgr-oper:software-install"},std::make_unique<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-oper:srlg"},std::make_unique<Cisco_IOS_XR_infra_rsi_oper::Srlg>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-vservice-cfg:vservice"},std::make_unique<Cisco_IOS_XR_vservice_cfg::Vservice>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rcmd-oper:rcmd"},std::make_unique<Cisco_IOS_XR_infra_rcmd_oper::Rcmd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-syslog-oper:logging"},std::make_unique<Cisco_IOS_XR_infra_syslog_oper::Logging>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-cmproxy-oper:sdr-inventory-vm"},std::make_unique<Cisco_IOS_XR_cmproxy_oper::SdrInventoryVm>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-oper:l2vpnv2"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::L2Vpnv2>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-sam-oper:sam"},std::make_unique<Cisco_IOS_XR_crypto_sam_oper::Sam>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-arp-oper:arp-gmp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-tty-server-cfg:tty"},std::make_unique<Cisco_IOS_XR_tty_server_cfg::Tty>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager"},std::make_unique<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-aaa-protocol-radius-oper:radius"},std::make_unique<Cisco_IOS_XR_aaa_protocol_radius_oper::Radius>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs1k-mxp-oper:hw-module"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_oper::HwModule>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-es-acl-cfg:es-acl"},std::make_unique<Cisco_IOS_XR_es_acl_cfg::EsAcl>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fib-common-cfg:fib"},std::make_unique<Cisco_IOS_XR_fib_common_cfg::Fib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-cdp-oper:cdp"},std::make_unique<Cisco_IOS_XR_cdp_oper::Cdp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ethernet-cfm-oper:cfm"},std::make_unique<Cisco_IOS_XR_ethernet_cfm_oper::Cfm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-ems-cfg:grpc"},std::make_unique<Cisco_IOS_XR_man_ems_cfg::Grpc>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-config-mda-cfg:preconfigured-nodes"},std::make_unique<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-controller-optics-oper:optics-oper"},std::make_unique<Cisco_IOS_XR_controller_optics_oper::OpticsOper>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-cfg:srlg"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::Srlg>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-macsec-mka-oper:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-es-acl-oper:es-acl"},std::make_unique<Cisco_IOS_XR_es_acl_oper::EsAcl>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-shellutil-cfg:host-names"},std::make_unique<Cisco_IOS_XR_shellutil_cfg::HostNames>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-dumper-cfg:exception"},std::make_unique<Cisco_IOS_XR_infra_dumper_cfg::Exception>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ha-eem-policy-oper:eem"},std::make_unique<Cisco_IOS_XR_ha_eem_policy_oper::Eem>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-io-oper:ipv6-io"},std::make_unique<Cisco_IOS_XR_ipv6_io_oper::Ipv6Io>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-snmp-agent-cfg:snmp"},std::make_unique<Cisco_IOS_XR_snmp_agent_cfg::Snmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-group-cfg:apply-groups"},std::make_unique<Cisco_IOS_XR_group_cfg::ApplyGroups>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-global"},std::make_unique<Cisco_IOS_XR_icpe_infra_cfg::NvSatelliteGlobal>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-dnx-port-mapper-oper:oor"},std::make_unique<Cisco_IOS_XR_dnx_port_mapper_oper::Oor>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-static-cfg:router-static"},std::make_unique<Cisco_IOS_XR_ip_static_cfg::RouterStatic>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-rgmgr-oper:redundancy-group-manager"},std::make_unique<Cisco_IOS_XR_rgmgr_oper::RedundancyGroupManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-oper:bundles-adjacency"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib-stdby"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6RibStdby>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-load-balance"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleLoadBalance>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-hsrp-oper:hsrp"},std::make_unique<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lib-keychain-cfg:keychains"},std::make_unique<Cisco_IOS_XR_lib_keychain_cfg::Keychains>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-skp-qos-oper:platform-qos-ea"},std::make_unique<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-spirit-install-instmgr-oper:software-install"},std::make_unique<Cisco_IOS_XR_spirit_install_instmgr_oper::SoftwareInstall>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt"},std::make_unique<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-config-mda-cfg:active-nodes"},std::make_unique<Cisco_IOS_XR_config_mda_cfg::ActiveNodes>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-ospf-cfg:ospf"},std::make_unique<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-ssh-oper:ssh1"},std::make_unique<Cisco_IOS_XR_crypto_ssh_oper::Ssh1>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-cdp-cfg:cdp"},std::make_unique<Cisco_IOS_XR_cdp_cfg::Cdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-oper:generic-interface-list-v2"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::GenericInterfaceListV2>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp"},std::make_unique<Cisco_IOS_XR_mpls_ldp_oper::MplsLdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-pfi-im-cmd-oper:interfaces"},std::make_unique<Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-udp-oper:udp-connection"},std::make_unique<Cisco_IOS_XR_ip_udp_oper::UdpConnection>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-bgp-oper:bgp"},std::make_unique<Cisco_IOS_XR_ipv4_bgp_oper::Bgp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-sla-cfg:sla"},std::make_unique<Cisco_IOS_XR_infra_sla_cfg::Sla>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-vpn-oper:l3vpn"},std::make_unique<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-oper:lacp-bundles"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::LacpBundles>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fib-common-oper:fib-statistics"},std::make_unique<Cisco_IOS_XR_fib_common_oper::FibStatistics>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-hsrp-cfg:hsrp"},std::make_unique<Cisco_IOS_XR_ipv4_hsrp_cfg::Hsrp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2-eth-infra-oper:vlan"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_oper::Vlan>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-objmgr-oper:object-group"},std::make_unique<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers"},std::make_unique<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-telnet-cfg:ipv4-telnet"},std::make_unique<Cisco_IOS_XR_ipv4_telnet_cfg::Ipv4Telnet>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lpts-lib-cfg:lpts"},std::make_unique<Cisco_IOS_XR_lpts_lib_cfg::Lpts>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-skp-qos-oper:platform-qos"},std::make_unique<Cisco_IOS_XR_skp_qos_oper::PlatformQos>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-clns-isis-oper:isis"},std::make_unique<Cisco_IOS_XR_clns_isis_oper::Isis>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-segment-routing-ms-oper:srms"},std::make_unique<Cisco_IOS_XR_segment_routing_ms_oper::Srms>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-config-cfgmgr-exec-oper:cfg-hist-gl"},std::make_unique<Cisco_IOS_XR_config_cfgmgr_exec_oper::CfgHistGl>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-procmem-oper:processes-memory"},std::make_unique<Cisco_IOS_XR_procmem_oper::ProcessesMemory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock"},std::make_unique<Cisco_IOS_XR_infra_infra_clock_linux_cfg::Clock>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-efd"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleEfd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-manageability-perfmgmt-cfg:perf-mgmt"},std::make_unique<Cisco_IOS_XR_manageability_perfmgmt_cfg::PerfMgmt>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-ma-cfg:subscriber-pta"},std::make_unique<Cisco_IOS_XR_ipv4_ma_cfg::SubscriberPta>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-config-mda-cfg:preconfigured-nodes"},std::make_unique<Cisco_IOS_XR_config_mda_cfg::PreconfiguredNodes>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-domain-cfg:ip-domain"},std::make_unique<Cisco_IOS_XR_ip_domain_cfg::IpDomain>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-tty-server-oper:tty"},std::make_unique<Cisco_IOS_XR_tty_server_oper::Tty>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lpts-pre-ifib-oper:lpts-pifib"},std::make_unique<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-syslog-cfg:syslog"},std::make_unique<Cisco_IOS_XR_infra_syslog_cfg::Syslog>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-filesystems-cfg:rcp"},std::make_unique<Cisco_IOS_XR_ipv4_filesystems_cfg::Rcp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-oper:vrf-group"},std::make_unique<Cisco_IOS_XR_infra_rsi_oper::VrfGroup>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-tc-cfg:traffic-collector"},std::make_unique<Cisco_IOS_XR_infra_tc_cfg::TrafficCollector>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-upgrade-fpd-oper:fpd"},std::make_unique<Cisco_IOS_XR_upgrade_fpd_oper::Fpd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ifmgr-oper:interface-properties"},std::make_unique<Cisco_IOS_XR_ifmgr_oper::InterfaceProperties>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rmf-oper:redundancy"},std::make_unique<Cisco_IOS_XR_infra_rmf_oper::Redundancy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ethernet-lldp-cfg:lldp"},std::make_unique<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-hsrp-oper:hsrp"},std::make_unique<Cisco_IOS_XR_ipv4_hsrp_oper::Hsrp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ifmgr-cfg:interface-configurations"},std::make_unique<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby"},std::make_unique<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-vrrp-cfg:vrrp"},std::make_unique<Cisco_IOS_XR_ipv4_vrrp_cfg::Vrrp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fib-common-oper:mpls-forwarding"},std::make_unique<Cisco_IOS_XR_fib_common_oper::MplsForwarding>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session"},std::make_unique<Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-acl-cfg:ipv4-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-domain-oper:ip-domain"},std::make_unique<Cisco_IOS_XR_ip_domain_oper::IpDomain>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-group-cfg:groups"},std::make_unique<Cisco_IOS_XR_group_cfg::Groups>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-show-fpd-loc-ng-oper:show-fpd"},std::make_unique<Cisco_IOS_XR_show_fpd_loc_ng_oper::ShowFpd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd"},std::make_unique<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-config-mda-cfg:active-nodes"},std::make_unique<Cisco_IOS_XR_config_mda_cfg::ActiveNodes>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-lpts-oper:platform-lptsp-ifib"},std::make_unique<Cisco_IOS_XR_asr9k_lpts_oper::PlatformLptspIfib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-vrrp-oper:vrrp"},std::make_unique<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-skp-qos-oper:platform-qos-ea"},std::make_unique<Cisco_IOS_XR_skp_qos_oper::PlatformQosEa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lib-keychain-macsec-cfg:mac-sec-keychains"},std::make_unique<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-pmengine-oper:performance-management-history"},std::make_unique<Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-parser-cfg:parser"},std::make_unique<Cisco_IOS_XR_parser_cfg::Parser>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-objmgr-cfg:object-group"},std::make_unique<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-tunnel-nve-oper:nve"},std::make_unique<Cisco_IOS_XR_tunnel_nve_oper::Nve>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-shellutil-filesystem-oper:file-system"},std::make_unique<Cisco_IOS_XR_shellutil_filesystem_oper::FileSystem>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-pfilter-oper:pfilter-ma"},std::make_unique<Cisco_IOS_XR_ip_pfilter_oper::PfilterMa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-udp-cfg:ip-udp"},std::make_unique<Cisco_IOS_XR_ip_udp_cfg::IpUdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-snmp-agent-cfg:snmp"},std::make_unique<Cisco_IOS_XR_snmp_agent_cfg::Snmp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-group-cfg:apply-groups"},std::make_unique<Cisco_IOS_XR_group_cfg::ApplyGroups>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fretta-bcm-dpa-npu-stats-oper:dpa"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_npu_stats_oper::Dpa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-qos-oper:platform-qos"},std::make_unique<Cisco_IOS_XR_asr9k_qos_oper::PlatformQos>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-infra-clock-linux-cfg:clock"},std::make_unique<Cisco_IOS_XR_infra_infra_clock_linux_cfg::Clock>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-oper:l2vpn"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::L2Vpn>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ethernet-lldp-cfg:lldp"},std::make_unique<Cisco_IOS_XR_ethernet_lldp_cfg::Lldp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ifmgr-cfg:interface-configurations"},std::make_unique<Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-tcp-cfg:ip"},std::make_unique<Cisco_IOS_XR_ip_tcp_cfg::Ip>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-sc-envmon-oper:environmental-monitoring"},std::make_unique<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-bfd-oper:bfd"},std::make_unique<Cisco_IOS_XR_ip_bfd_oper::Bfd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-tty-server-cfg:tty"},std::make_unique<Cisco_IOS_XR_tty_server_cfg::Tty>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-sam-cfg:crypto"},std::make_unique<Cisco_IOS_XR_crypto_sam_cfg::Crypto>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-tcp-oper:tcp-connection"},std::make_unique<Cisco_IOS_XR_ip_tcp_oper::TcpConnection>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-aaa-locald-oper:aaa"},std::make_unique<Cisco_IOS_XR_aaa_locald_oper::Aaa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-io-oper:ipv4-network"},std::make_unique<Cisco_IOS_XR_ipv4_io_oper::Ipv4Network>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-igmp-oper:igmp"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_oper::Igmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-ospfv3-oper:ospfv3"},std::make_unique<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2-eth-infra-cfg:ethernet-features"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_cfg::EthernetFeatures>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rib-ipv4-oper:rib"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv4_oper::Rib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fretta-bcm-dpa-resources-oper:dpa"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_resources_oper::Dpa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-objmgr-cfg:object-group"},std::make_unique<Cisco_IOS_XR_infra_objmgr_cfg::ObjectGroup>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_oper::XrXml>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-dumper-cfg:exception"},std::make_unique<Cisco_IOS_XR_infra_dumper_cfg::Exception>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-dnx-port-mapper-oper:oor"},std::make_unique<Cisco_IOS_XR_dnx_port_mapper_oper::Oor>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-te"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsTe>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-acl-cfg:ipv6-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv6_acl_cfg::Ipv6AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-tp"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsTp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-arp-oper:arp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_oper::Arp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-sam-oper:sam"},std::make_unique<Cisco_IOS_XR_crypto_sam_oper::Sam>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rsvp-oper:rsvp-standby"},std::make_unique<Cisco_IOS_XR_ip_rsvp_oper::RsvpStandby>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ifmgr-cfg:global-interface-configuration"},std::make_unique<Cisco_IOS_XR_ifmgr_cfg::GlobalInterfaceConfiguration>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-ntp-cfg:ntp"},std::make_unique<Cisco_IOS_XR_ip_ntp_cfg::Ntp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-ntp-oper:ntp"},std::make_unique<Cisco_IOS_XR_ip_ntp_oper::Ntp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-pim-cfg:pim"},std::make_unique<Cisco_IOS_XR_ipv4_pim_cfg::Pim>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2-eth-infra-oper:ethernet-encapsulation"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_oper::EthernetEncapsulation>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd"},std::make_unique<Cisco_IOS_XR_ipv4_mfwd_cfg::Mfwd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-wdsysmon-fd-oper:system-monitoring"},std::make_unique<Cisco_IOS_XR_wdsysmon_fd_oper::SystemMonitoring>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm"},std::make_unique<Cisco_IOS_XR_ip_iarm_v6_oper::Ipv6Arm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rib-ipv6-oper:ipv6-rib"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv6_oper::Ipv6Rib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-bfd-cfg:bfd"},std::make_unique<Cisco_IOS_XR_ip_bfd_cfg::Bfd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-telemetry-model-driven-cfg:telemetry-model-driven"},std::make_unique<Cisco_IOS_XR_telemetry_model_driven_cfg::TelemetryModelDriven>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-oper:lacp-bundle-members"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-qos-ma-oper:qos"},std::make_unique<Cisco_IOS_XR_qos_ma_oper::Qos>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-ssh-oper:ssh"},std::make_unique<Cisco_IOS_XR_crypto_ssh_oper::Ssh>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg:dhcpv6"},std::make_unique<Cisco_IOS_XR_ipv6_new_dhcpv6d_cfg::Dhcpv6>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-tty-vty-cfg:vty"},std::make_unique<Cisco_IOS_XR_tty_vty_cfg::Vty>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper:inventory"},std::make_unique<Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-infra-locale-cfg:locale"},std::make_unique<Cisco_IOS_XR_infra_infra_locale_cfg::Locale>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper:inventory"},std::make_unique<Cisco_IOS_XR_asr9k_sc_invmgr_admin_oper::Inventory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsLcacStandby>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-ntp-admin-oper:ntp"},std::make_unique<Cisco_IOS_XR_ip_ntp_admin_oper::Ntp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd"},std::make_unique<Cisco_IOS_XR_ipv4_dhcpd_cfg::Ipv4Dhcpd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-ems-oper:grpc"},std::make_unique<Cisco_IOS_XR_man_ems_oper::Grpc>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-plat-chas-invmgr-oper:platform-inventory"},std::make_unique<Cisco_IOS_XR_plat_chas_invmgr_oper::PlatformInventory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-arp-cfg:arp-redundancy"},std::make_unique<Cisco_IOS_XR_ipv4_arp_cfg::ArpRedundancy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-bgp-cfg:bgp"},std::make_unique<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config"},std::make_unique<Cisco_IOS_XR_fia_hw_profile_cfg::HwModuleProfileConfig>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-prm-server-oper:hardware-module"},std::make_unique<Cisco_IOS_XR_prm_server_oper::HardwareModule>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-iedge4710-oper:subscriber"},std::make_unique<Cisco_IOS_XR_iedge4710_oper::Subscriber>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lib-keychain-oper:keychain"},std::make_unique<Cisco_IOS_XR_lib_keychain_oper::Keychain>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3"},std::make_unique<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-l2vpn-cfg:l2vpn"},std::make_unique<Cisco_IOS_XR_l2vpn_cfg::L2Vpn>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-rgmgr-cfg:redundancy-group-manager"},std::make_unique<Cisco_IOS_XR_rgmgr_cfg::RedundancyGroupManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ethernet-lldp-oper:lldp"},std::make_unique<Cisco_IOS_XR_ethernet_lldp_oper::Lldp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-te-oper:mpls-pce"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsPce>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-nto-misc-shmem-oper:memory-summary"},std::make_unique<Cisco_IOS_XR_nto_misc_shmem_oper::MemorySummary>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-policymgr-oper:policy-manager"},std::make_unique<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rib-ipv4-oper:rib-stdby"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-traffmon-netflow-cfg:net-flow"},std::make_unique<Cisco_IOS_XR_traffmon_netflow_cfg::NetFlow>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rsvp-oper:rsvp"},std::make_unique<Cisco_IOS_XR_ip_rsvp_oper::Rsvp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper:drop"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_drop_stats_oper::Drop>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-tty-server-oper:tty"},std::make_unique<Cisco_IOS_XR_tty_server_oper::Tty>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm"},std::make_unique<Cisco_IOS_XR_ip_iarm_v4_oper::Ipv4Arm>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-plat-chas-invmgr-oper:platform"},std::make_unique<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager"},std::make_unique<Cisco_IOS_XR_iedge4710_cfg::IedgeLicenseManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-pim-oper:pim"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::Pim>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-qos-mode"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleQosMode>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-iedge4710-cfg:subscriber-manager"},std::make_unique<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-oper:l2vpn-forwarding"},std::make_unique<Cisco_IOS_XR_l2vpn_oper::L2VpnForwarding>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-te-standby"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsTeStandby>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-wd-oper:watchdog"},std::make_unique<Cisco_IOS_XR_wd_oper::Watchdog>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-wanphy-ui-oper:wanphy"},std::make_unique<Cisco_IOS_XR_wanphy_ui_oper::Wanphy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor"},std::make_unique<Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-installmgr-admin-oper:install"},std::make_unique<Cisco_IOS_XR_installmgr_admin_oper::Install>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-dnx-driver-oper:fia"},std::make_unique<Cisco_IOS_XR_dnx_driver_oper::Fia>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-autorp-oper:auto-rp"},std::make_unique<Cisco_IOS_XR_ipv4_autorp_oper::AutoRp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-cfg:selective-vrf-download"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::SelectiveVrfDownload>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-policy-repository-oper:routing-policy"},std::make_unique<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rib-cfg:rib"},std::make_unique<Cisco_IOS_XR_ip_rib_cfg::Rib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-cdp-cfg:cdp"},std::make_unique<Cisco_IOS_XR_cdp_cfg::Cdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-arp-cfg:arpgmp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-igmp-cfg:mld"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_cfg::Mld>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd"},std::make_unique<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-manageability-object-tracking-cfg:object-trackings"},std::make_unique<Cisco_IOS_XR_manageability_object_tracking_cfg::ObjectTrackings>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats"},std::make_unique<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-xml-ttyagent-cfg:xr-xml"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_cfg::XrXml>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asic-errors-oper:asic-errors"},std::make_unique<Cisco_IOS_XR_asic_errors_oper::AsicErrors>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-dwdm-ui-oper:dwdm"},std::make_unique<Cisco_IOS_XR_dwdm_ui_oper::Dwdm>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lib-keychain-macsec-cfg:mac-sec-keychains"},std::make_unique<Cisco_IOS_XR_lib_keychain_macsec_cfg::MacSecKeychains>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-ssh-oper:ssh1"},std::make_unique<Cisco_IOS_XR_crypto_ssh_oper::Ssh1>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-wd-oper:watchdog"},std::make_unique<Cisco_IOS_XR_wd_oper::Watchdog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-sc-invmgr-oper:inventory"},std::make_unique<Cisco_IOS_XR_asr9k_sc_invmgr_oper::Inventory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-manageability-object-tracking-oper:object-tracking"},std::make_unique<Cisco_IOS_XR_manageability_object_tracking_oper::ObjectTracking>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2-eth-infra-oper:mac-accounting"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_oper::MacAccounting>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-crypto-macsec-mka-oper:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_mka_oper::Macsec>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-macsec-pl-oper:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_pl_oper::Macsec>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-linux-os-reboot-history-oper:reboot-history"},std::make_unique<Cisco_IOS_XR_linux_os_reboot_history_oper::RebootHistory>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-cfg:vrfs"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::Vrfs>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-sla-oper:sla"},std::make_unique<Cisco_IOS_XR_infra_sla_oper::Sla>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-io-cfg:ipv6-configuration"},std::make_unique<Cisco_IOS_XR_ipv6_io_cfg::Ipv6Configuration>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-udp-oper:udp-connection"},std::make_unique<Cisco_IOS_XR_ip_udp_oper::UdpConnection>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2-eth-infra-oper:vlan"},std::make_unique<Cisco_IOS_XR_l2_eth_infra_oper::Vlan>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-controller-optics-oper:optics-oper"},std::make_unique<Cisco_IOS_XR_controller_optics_oper::OpticsOper>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-tty-management-cmd-oper:show-users"},std::make_unique<Cisco_IOS_XR_tty_management_cmd_oper::ShowUsers>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ethernet-link-oam-oper:ether-link-oam"},std::make_unique<Cisco_IOS_XR_ethernet_link_oam_oper::EtherLinkOam>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd"},std::make_unique<Cisco_IOS_XR_mpls_lsd_oper::MplsLsd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-infra-clock-cfg:clock"},std::make_unique<Cisco_IOS_XR_infra_infra_clock_cfg::Clock>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-ospfv3-cfg:ospfv3"},std::make_unique<Cisco_IOS_XR_ipv6_ospfv3_cfg::Ospfv3>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-filesystems-cfg:rcp"},std::make_unique<Cisco_IOS_XR_ipv4_filesystems_cfg::Rcp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-pim-oper:ipv6-pim"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ifmgr-cfg:global-interface-configuration"},std::make_unique<Cisco_IOS_XR_ifmgr_cfg::GlobalInterfaceConfiguration>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-atm-vcm-oper:atm-vcm"},std::make_unique<Cisco_IOS_XR_atm_vcm_oper::AtmVcm>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-shellutil-oper:system-time"},std::make_unique<Cisco_IOS_XR_shellutil_oper::SystemTime>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-domain-oper:ip-domain"},std::make_unique<Cisco_IOS_XR_ip_domain_oper::IpDomain>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-cfg:global-af"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::GlobalAf>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-vrrp-oper:vrrp"},std::make_unique<Cisco_IOS_XR_ipv4_vrrp_oper::Vrrp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-cfg:vrfs"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::Vrfs>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-lsd-cfg:mpls-lsd"},std::make_unique<Cisco_IOS_XR_mpls_lsd_cfg::MplsLsd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-syslog-cfg:syslog-service"},std::make_unique<Cisco_IOS_XR_infra_syslog_cfg::SyslogService>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lib-keychain-oper:keychain"},std::make_unique<Cisco_IOS_XR_lib_keychain_oper::Keychain>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-xml-ttyagent-oper:netconf"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-ma-oper:ipv6-network"},std::make_unique<Cisco_IOS_XR_ipv6_ma_oper::Ipv6Network>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-sla-cfg:sla"},std::make_unique<Cisco_IOS_XR_infra_sla_cfg::Sla>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-igmp-cfg:igmp"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp"},std::make_unique<Cisco_IOS_XR_mpls_ldp_cfg::MplsLdp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-global"},std::make_unique<Cisco_IOS_XR_icpe_infra_cfg::NvSatelliteGlobal>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-policy-repository-oper:routing-policy"},std::make_unique<Cisco_IOS_XR_policy_repository_oper::RoutingPolicy>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-sbfd-cfg:sbfd"},std::make_unique<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs1k-mxp-headless-oper:headless-func-data"},std::make_unique<Cisco_IOS_XR_ncs1k_mxp_headless_oper::HeadlessFuncData>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-policymgr-cfg:policy-manager"},std::make_unique<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper:dpa"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_hw_resources_oper::Dpa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ncs5500-qos-oper:platform-qos"},std::make_unique<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-xml-ttyagent-cfg:netconf"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_cfg::Netconf>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-openconfig-terminal-device-cfg:logical-channels"},std::make_unique<Cisco_IOS_XR_openconfig_terminal_device_cfg::LogicalChannels>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-pim-oper:ipv6-pim"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-statsd-cfg:statistics"},std::make_unique<Cisco_IOS_XR_infra_statsd_cfg::Statistics>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-mobileip-cfg:mobile-ip"},std::make_unique<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-tty-management-cmd-oper:show-users"},std::make_unique<Cisco_IOS_XR_tty_management_cmd_oper::ShowUsers>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-igmp-oper:mld"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_oper::Mld>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ncs5500-qos-oper:platform-qos"},std::make_unique<Cisco_IOS_XR_ncs5500_qos_oper::PlatformQos>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists"},std::make_unique<Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-domain-cfg:ip-domain"},std::make_unique<Cisco_IOS_XR_ip_domain_cfg::IpDomain>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-correlator-oper:correlator"},std::make_unique<Cisco_IOS_XR_infra_correlator_oper::Correlator>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-ospf-cfg:ospf"},std::make_unique<Cisco_IOS_XR_ipv4_ospf_cfg::Ospf>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-ospf-oper:ospf"},std::make_unique<Cisco_IOS_XR_ipv4_ospf_oper::Ospf>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-fib-common-cfg:fib"},std::make_unique<Cisco_IOS_XR_fib_common_cfg::Fib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-snmp-agent-cfg:mib"},std::make_unique<Cisco_IOS_XR_snmp_agent_cfg::Mib>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-clns-isis-oper:isis"},std::make_unique<Cisco_IOS_XR_clns_isis_oper::Isis>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual"},std::make_unique<Cisco_IOS_XR_ipv4_smiap_cfg::Ipv4Virtual>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-pim-cfg:pim"},std::make_unique<Cisco_IOS_XR_ipv4_pim_cfg::Pim>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ha-eem-cfg:event-manager"},std::make_unique<Cisco_IOS_XR_ha_eem_cfg::EventManager>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-rib-ipv4-oper:rib-stdby"},std::make_unique<Cisco_IOS_XR_ip_rib_ipv4_oper::RibStdby>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-tcp-oper:tcp-nsr"},std::make_unique<Cisco_IOS_XR_ip_tcp_oper::TcpNsr>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-es-acl-cfg:es-acl"},std::make_unique<Cisco_IOS_XR_es_acl_cfg::EsAcl>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-bfd-oper:bfd"},std::make_unique<Cisco_IOS_XR_ip_bfd_oper::Bfd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-sla-oper:sla"},std::make_unique<Cisco_IOS_XR_infra_sla_oper::Sla>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session"},std::make_unique<Cisco_IOS_XR_Ethernet_SPAN_oper::SpanMonitorSession>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-filesystems-cfg:tftp"},std::make_unique<Cisco_IOS_XR_ipv4_filesystems_cfg::Tftp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-sbfd-cfg:sbfd"},std::make_unique<Cisco_IOS_XR_ip_sbfd_cfg::Sbfd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-policy-repository-cfg:routing-policy"},std::make_unique<Cisco_IOS_XR_policy_repository_cfg::RoutingPolicy>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv6-smiap-cfg:ipv6-virtual"},std::make_unique<Cisco_IOS_XR_ipv6_smiap_cfg::Ipv6Virtual>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface"},std::make_unique<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-telnet-cfg:ipv6-telnet"},std::make_unique<Cisco_IOS_XR_ipv4_telnet_cfg::Ipv6Telnet>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-prm-server-oper:prm"},std::make_unique<Cisco_IOS_XR_prm_server_oper::Prm>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-static-cfg:mpls-static"},std::make_unique<Cisco_IOS_XR_mpls_static_cfg::MplsStatic>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-parser-cfg:parser"},std::make_unique<Cisco_IOS_XR_parser_cfg::Parser>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-sbfd-oper:sbfd"},std::make_unique<Cisco_IOS_XR_ip_sbfd_oper::Sbfd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-dnx-netflow-oper:net-flow"},std::make_unique<Cisco_IOS_XR_dnx_netflow_oper::NetFlow>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-telnet-cfg:ipv4-telnet"},std::make_unique<Cisco_IOS_XR_ipv4_telnet_cfg::Ipv4Telnet>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-shellutil-filesystem-oper:file-system"},std::make_unique<Cisco_IOS_XR_shellutil_filesystem_oper::FileSystem>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-syslog-cfg:syslog-service"},std::make_unique<Cisco_IOS_XR_infra_syslog_cfg::SyslogService>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-objmgr-oper:object-group"},std::make_unique<Cisco_IOS_XR_infra_objmgr_oper::ObjectGroup>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-oper:bundle-information"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::BundleInformation>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-syslog-oper:syslog"},std::make_unique<Cisco_IOS_XR_infra_syslog_oper::Syslog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-snmp-agent-cfg:mib"},std::make_unique<Cisco_IOS_XR_snmp_agent_cfg::Mib>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-fsi-oper:fabric-stats"},std::make_unique<Cisco_IOS_XR_asr9k_fsi_oper::FabricStats>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-telnet-mgmt-cfg:telnet"},std::make_unique<Cisco_IOS_XR_ipv4_telnet_mgmt_cfg::Telnet>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-pce"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsPce>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-xml-ttyagent-oper:netconf"},std::make_unique<Cisco_IOS_XR_man_xml_ttyagent_oper::Netconf>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-fretta-bcm-dpa-npu-stats-oper:dpa"},std::make_unique<Cisco_IOS_XR_fretta_bcm_dpa_npu_stats_oper::Dpa>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-bundlemgr-cfg:lacp"},std::make_unique<Cisco_IOS_XR_bundlemgr_cfg::Lacp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-segment-routing-ms-cfg:sr"},std::make_unique<Cisco_IOS_XR_segment_routing_ms_cfg::Sr>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-dwdm-ui-oper:vtxp"},std::make_unique<Cisco_IOS_XR_dwdm_ui_oper::Vtxp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-man-netconf-cfg:netconf-yang"},std::make_unique<Cisco_IOS_XR_man_netconf_cfg::NetconfYang>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-clns-isis-cfg:isis"},std::make_unique<Cisco_IOS_XR_clns_isis_cfg::Isis>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-arp-cfg:arpgmp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_cfg::Arpgmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-tcp-oper:tcp"},std::make_unique<Cisco_IOS_XR_ip_tcp_oper::Tcp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-icpe-infra-oper:nv-satellite"},std::make_unique<Cisco_IOS_XR_icpe_infra_oper::NvSatellite>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-prm-server-oper:hardware-module"},std::make_unique<Cisco_IOS_XR_prm_server_oper::HardwareModule>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-procmem-oper:processes-memory"},std::make_unique<Cisco_IOS_XR_procmem_oper::ProcessesMemory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv4-igmp-cfg:igmp"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_cfg::Igmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-lib-mpp-oper:management-plane-protection"},std::make_unique<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lib-mpp-cfg:control-plane"},std::make_unique<Cisco_IOS_XR_lib_mpp_cfg::ControlPlane>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-watchd-cfg:watchd"},std::make_unique<Cisco_IOS_XR_watchd_cfg::Watchd>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-cfg:srlg"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::Srlg>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-spirit-corehelper-cfg:exception"},std::make_unique<Cisco_IOS_XR_spirit_corehelper_cfg::Exception>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-pbr-vservice-mgr-oper:global-service-function-chaining"},std::make_unique<Cisco_IOS_XR_pbr_vservice_mgr_oper::GlobalServiceFunctionChaining>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-lib-mpp-oper:management-plane-protection"},std::make_unique<Cisco_IOS_XR_lib_mpp_oper::ManagementPlaneProtection>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-cfg:vrf-groups"},std::make_unique<Cisco_IOS_XR_infra_rsi_cfg::VrfGroups>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-crypto-macsec-secy-oper:macsec"},std::make_unique<Cisco_IOS_XR_crypto_macsec_secy_oper::Macsec>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-openconfig-terminal-device-cfg:optical-channels"},std::make_unique<Cisco_IOS_XR_openconfig_terminal_device_cfg::OpticalChannels>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-prm-cfg:hardware-module-tcp-mss-adjust"},std::make_unique<Cisco_IOS_XR_asr9k_prm_cfg::HardwareModuleTcpMssAdjust>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-mpls-oam-cfg:mpls-oam"},std::make_unique<Cisco_IOS_XR_mpls_oam_cfg::MplsOam>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-acl-oper:ipv6-acl-and-prefix-list"},std::make_unique<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-vpn-oper:l3vpn"},std::make_unique<Cisco_IOS_XR_mpls_vpn_oper::L3Vpn>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-tcp-oper:tcp"},std::make_unique<Cisco_IOS_XR_ip_tcp_oper::Tcp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-es-acl-oper:es-acl"},std::make_unique<Cisco_IOS_XR_es_acl_oper::EsAcl>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-alarm-logger-oper:alarm-logger"},std::make_unique<Cisco_IOS_XR_infra_alarm_logger_oper::AlarmLogger>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-macsec-ctrlr-oper:macsec-ctrlr-oper"},std::make_unique<Cisco_IOS_XR_macsec_ctrlr_oper::MacsecCtrlrOper>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download"},std::make_unique<Cisco_IOS_XR_infra_rsi_oper::SelectiveVrfDownload>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-infra-clock-cfg:clock"},std::make_unique<Cisco_IOS_XR_infra_infra_clock_cfg::Clock>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-rsvp-cfg:rsvp"},std::make_unique<Cisco_IOS_XR_ip_rsvp_cfg::Rsvp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-sbfd-oper:sbfd"},std::make_unique<Cisco_IOS_XR_ip_sbfd_oper::Sbfd>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface"},std::make_unique<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-bgp-cfg:bmp-servers"},std::make_unique<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-icpe-infra-cfg:nv-satellites"},std::make_unique<Cisco_IOS_XR_icpe_infra_cfg::NvSatellites>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-syslog-cfg:syslog"},std::make_unique<Cisco_IOS_XR_infra_syslog_cfg::Syslog>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-iedge4710-cfg:subscriber-manager"},std::make_unique<Cisco_IOS_XR_iedge4710_cfg::SubscriberManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-ems-cfg:grpc"},std::make_unique<Cisco_IOS_XR_man_ems_cfg::Grpc>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining"},std::make_unique<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-lsd-oper:mpls-lsd-nodes"},std::make_unique<Cisco_IOS_XR_mpls_lsd_oper::MplsLsdNodes>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-igmp-cfg:amt"},std::make_unique<Cisco_IOS_XR_ipv4_igmp_cfg::Amt>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-filesystems-cfg:tftp"},std::make_unique<Cisco_IOS_XR_ipv4_filesystems_cfg::Tftp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-oam-cfg:mpls-oam"},std::make_unique<Cisco_IOS_XR_mpls_oam_cfg::MplsOam>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-arp-oper:arp-gmp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_oper::ArpGmp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-ems-oper:grpc"},std::make_unique<Cisco_IOS_XR_man_ems_oper::Grpc>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-telemetry-model-driven-oper:telemetry-model-driven"},std::make_unique<Cisco_IOS_XR_telemetry_model_driven_oper::TelemetryModelDriven>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-iep-oper:explicit-paths"},std::make_unique<Cisco_IOS_XR_ip_iep_oper::ExplicitPaths>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-udp-oper:udp"},std::make_unique<Cisco_IOS_XR_ip_udp_oper::Udp>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-invmgr-oper:inventory"},std::make_unique<Cisco_IOS_XR_invmgr_oper::Inventory>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asr9k-asic-errors-oper:asic-error-stats"},std::make_unique<Cisco_IOS_XR_asr9k_asic_errors_oper::AsicErrorStats>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-oper:lacp-data"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::LacpData>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ip-tcp-oper:tcp-nsr"},std::make_unique<Cisco_IOS_XR_ip_tcp_oper::TcpNsr>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-netflow-oper:net-flow"},std::make_unique<Cisco_IOS_XR_asr9k_netflow_oper::NetFlow>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-pbr-vservice-ea-oper:service-function-chaining"},std::make_unique<Cisco_IOS_XR_pbr_vservice_ea_oper::ServiceFunctionChaining>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-bundlemgr-oper:bundle-information"},std::make_unique<Cisco_IOS_XR_bundlemgr_oper::BundleInformation>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-pmengine-oper:performance-management"},std::make_unique<Cisco_IOS_XR_pmengine_oper::PerformanceManagement>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-oper:selective-vrf-download"},std::make_unique<Cisco_IOS_XR_infra_rsi_oper::SelectiveVrfDownload>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-asr9k-sc-envmon-oper:environmental-monitoring"},std::make_unique<Cisco_IOS_XR_asr9k_sc_envmon_oper::EnvironmentalMonitoring>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-openconfig-terminal-device-oper:optical-interface"},std::make_unique<Cisco_IOS_XR_openconfig_terminal_device_oper::OpticalInterface>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-aaa-lib-cfg:aaa"},std::make_unique<Cisco_IOS_XR_aaa_lib_cfg::Aaa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-man-netconf-cfg:netconf-yang"},std::make_unique<Cisco_IOS_XR_man_netconf_cfg::NetconfYang>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-qos-ma-oper:qos"},std::make_unique<Cisco_IOS_XR_qos_ma_oper::Qos>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ip-ntp-oper:ntp"},std::make_unique<Cisco_IOS_XR_ip_ntp_oper::Ntp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-infra-cfg:banners"},std::make_unique<Cisco_IOS_XR_infra_infra_cfg::Banners>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-Ethernet-SPAN-cfg:span-monitor-session"},std::make_unique<Cisco_IOS_XR_Ethernet_SPAN_cfg::SpanMonitorSession>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-infra-rsi-oper:srlg"},std::make_unique<Cisco_IOS_XR_infra_rsi_oper::Srlg>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-lcac"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsLcac>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-infra-policymgr-oper:policy-manager"},std::make_unique<Cisco_IOS_XR_infra_policymgr_oper::PolicyManager>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-manageability-perfmgmt-oper:perf-mgmt"},std::make_unique<Cisco_IOS_XR_manageability_perfmgmt_oper::PerfMgmt>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-ipv6-ospfv3-oper:ospfv3"},std::make_unique<Cisco_IOS_XR_ipv6_ospfv3_oper::Ospfv3>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-drivers-media-eth-oper:ethernet-interface"},std::make_unique<Cisco_IOS_XR_drivers_media_eth_oper::EthernetInterface>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-mpls-te-oper:mpls-pce-stdby"},std::make_unique<Cisco_IOS_XR_mpls_te_oper::MplsPceStdby>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-plat-chas-invmgr-oper:platform"},std::make_unique<Cisco_IOS_XR_plat_chas_invmgr_oper::Platform>());
    ydk_top_entities_table.insert(std::string{"/Cisco-IOS-XR-asic-errors-oper:asic-errors"},std::make_unique<Cisco_IOS_XR_asic_errors_oper::AsicErrors>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-pim-oper:pim-ma"},std::make_unique<Cisco_IOS_XR_ipv4_pim_oper::PimMa>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-ipv4-arp-oper:arp"},std::make_unique<Cisco_IOS_XR_ipv4_arp_oper::Arp>());
    ydk_top_entities_table.insert(std::string{"http://cisco.com/ns/yang/Cisco-IOS-XR-watchd-cfg:watchd"},std::make_unique<Cisco_IOS_XR_watchd_cfg::Watchd>());


    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-object-tracking-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-bfd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-vservice-mgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-protocol-radius-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ospfv3-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tunnel-gre-cfg"},"2016-05-25", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-netflow-oper-sub5"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-management-cfg"},"2015-09-25", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-sla-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-confcopymib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-sla-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-resources-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-drop-stats-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-hsrp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-arp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-shellutil-filesystem-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-invmgr-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-oper-sub2"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-autorp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-nto-misc-shprocmem-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-group-cfg"},"2016-04-29", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-lldp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-fsi-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-headless-oper-sub1"},"2016-08-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-netflow-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-vservice-ea-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rmf-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-netflow-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ospf-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rib-ipv4-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-macsec-ctrlr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-traffmon-netflow-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-infra-clock-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-alarm-logger-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-igmp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-asic-errors-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-invmgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ifmgr-oper"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-lldp-oper"},"2016-10-13", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-objmgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-controller-otu-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-ssh-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub2"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-mpp-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-coherent-node-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-object-tracking-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-management-cmd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub6"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-vcm-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-invmgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-mka-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-keychain-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-management-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-acl-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-acl-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-nto-misc-shmem-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-io-oper-sub1"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub5"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rcmd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-syslogmib-cfg"},"2015-12-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-perfmgmt-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-subscriber-infra-tmplmgr-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-platform-pifib-oper"},"2016-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-controller-optics-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-clns-isis-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-cfg"},"2016-03-08", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub7"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-otnifmib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-prm-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-vrrp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-sla-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lpts-lib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-sbfd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-igmp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-netflow-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-watchd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-drivers-media-eth-oper-sub1"},"2015-10-14", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-vcm-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-entitymib-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-management-cmd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-ltrace-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-test-trap-act"},"2016-04-17", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-pfilter-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-xml-ttyagent-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fia-hw-profile-cfg"},"2016-06-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-cfg-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-telnet-mgmt-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-udp-oper-sub1"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-lldp-oper-sub1"},"2016-10-13", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-oper-sub4"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2vpn-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub9"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-lpts-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-cmproxy-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-segment-routing-ms-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-plat-chas-invmgr-oper-sub2"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iep-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub4"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-tacacs-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-oper-sub3"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-pim-cfg"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-object-tracking-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-cfg"},"2015-10-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-acl-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fib-common-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fia-internal-tcam-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-locald-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-upgrade-fpd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-mfwd-cfg"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ospf-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-xml-ttyagent-oper"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-shellutil-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-link-oam-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-port-mapper-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-sdr-invmgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tunnel-nve-cfg"},"2016-08-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-resources-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-netflow-oper-sub5"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-bfd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fib-common-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iep-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rcmd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-mka-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-invmgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-nd-subscriber-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-clns-isis-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-controller-optics-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-iedge4710-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-protocol-radius-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2vpn-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-oper-sub5"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-nto-misc-shmem-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-new-dhcpv6d-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pmengine-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ha-eem-policy-oper-sub1"},"2016-02-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-sensormib-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-segment-routing-ms-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-rgmgr-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-ntp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-new-dhcpv6d-cfg"},"2016-03-08", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-vty-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-vcm-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-pl-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tunnel-nve-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-policy-repository-cfg"},"2015-08-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dwdm-ui-cfg"},"2015-12-16", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-bundlemgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-parser-cfg"},"2015-06-02", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-sensormib-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-ssh-oper-sub1"},"2015-06-02", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ifmgr-oper-sub2"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-syslog-cfg"},"2016-06-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub5"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-ceredundancymib-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rsi-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-clns-isis-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-drivers-media-eth-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-policy-repository-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mdrv-lib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-config-cfgmgr-exec-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-smiap-cfg"},"2016-07-04", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iarm-v4-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-netflow-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2-eth-infra-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2-eth-infra-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lpts-pre-ifib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-netflow-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-types"},"2015-06-29", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-oper-sub1"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-ntp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-autorp-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-arp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dwdm-ui-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-oper"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-alarm-logger-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-procmem-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-frucontrolmib-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-domain-oper"},"2015-09-29", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-invmgr-admin-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-alarmgr-server-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lpts-pre-ifib-oper"},"2016-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-correlator-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-driver-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-netconf-cfg"},"2016-03-15", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-cmproxy-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-correlator-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pfi-im-cmd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iarm-datatypes"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub6"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-link-oam-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-policymgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fib-common-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-entitymib-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ma-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iarm-vrf-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-vrrp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-flashmib-cfg"},"2015-12-15", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-protocol-radius-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-bfd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-installmgr-admin-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-skp-qos-oper"},"2016-02-18", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tunnel-nve-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-npu-stats-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-acl-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-iedge4710-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-udp-oper-sub4"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-openconfig-terminal-device-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-domain-cfg"},"2015-05-13", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-npu-stats-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-lib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-icmp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-ifmib-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rsvp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-perfmgmt-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-qos-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-iedge4710-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fib-common-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-objmgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-pfilter-subscriber-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-skp-qos-oper-sub2"},"2016-02-18", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-envmon-admin-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ifmgr-oper-sub1"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-bgp-oper-sub1"},"2015-08-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-iedge4710-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-dhcpd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-es-acl-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-telemetry-model-driven-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-segment-routing-ms-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-es-acl-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-static-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-netflow-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ospf-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-lsd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-vservice-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-iedge4710-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-qos-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-ifmib-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-subscriber-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ospfv3-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-oper-sub3"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-domain-oper-sub1"},"2015-09-29", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-udp-oper-sub2"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-link-oam-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rib-ipv6-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-vcm-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-nd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-correlator-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-sbfd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-platform-pifib-oper-sub1"},"2016-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-headless-oper"},"2016-08-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-np-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-static-cfg"},"2015-09-10", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-acl-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wanphy-ui-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-installmgr-admin-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ha-eem-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-openconfig-terminal-device-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rmf-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ifmgr-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-udp-oper"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-rgmgr-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-pfilter-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-mib-rfmib-cfg"},"2016-05-13", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-policy-repository-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-nto-misc-shprocmem-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-spirit-install-instmgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-netflow-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub3"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lpts-pre-ifib-oper-sub1"},"2016-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-show-fpd-loc-ng-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-tcp-cfg"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wanphy-ui-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-autorp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-nto-misc-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pmengine-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-ntp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-udp-oper-sub3"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-io-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-management-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ace-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-qos-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-perfmgmt-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-config-mda-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wanphy-ui-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pfi-im-cmd-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-acl-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-secy-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-spirit-install-instmgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-vservice-ea-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-pim-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-rgmgr-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-management-datatypes"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-statsd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-tacacs-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-config-cfgmgr-exec-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-subscriber-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-bgp-oper"},"2015-08-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-policymgr-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-statsd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fib-common-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-qos-ma-cfg"},"2016-03-03", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-ems-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-new-dhcpv6d-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2-eth-infra-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-tc-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-lldp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-igmp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-linux-os-reboot-history-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-ntp-admin-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-lldp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ace-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dwdm-ui-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-locald-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-ssh-oper"},"2015-06-02", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-keychain-macsec-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-cdp-oper-sub1"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-pim-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-invmgr-oper-sub3"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-shellutil-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-qos-mibs-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-object-tracking-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub5"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-openconfig-terminal-device-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-static-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ma-oper-sub1"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-shellutil-cfg"},"2015-10-12", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-io-cfg"},"2016-05-10", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iep-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-coherent-portmode-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-bundlemgr-cfg"},"2016-05-12", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-sensormib-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-udp-cfg"},"2016-02-26", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-bundlemgr-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rib-ipv4-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iarm-v4-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ospfv3-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2-eth-infra-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ma-subscriber-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-statsd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-coherent-portmode-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ma-oper-sub1"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-policymgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-common-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-secy-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-installmgr-admin-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-io-oper-sub2"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-asic-errors-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-invmgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-oper-sub1"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-oper-sub5"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-policymgr-cfg"},"2015-05-18", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-bgp-datatypes"},"2015-08-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-locald-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rsi-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-keychain-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-qos-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-cdp-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2vpn-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs1k-mxp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-fsi-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-prm-server-oper"},"2016-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub8"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2vpn-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-new-dhcpv6d-subscriber-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-vpn-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-netflow-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-mobileip-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iarm-v6-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-bundlemgr-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-sam-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-vcm-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pfi-im-cmd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-qos-ma-oper"},"2016-03-03", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ma-oper"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-show-fpd-loc-ng-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-cfgmgr-rollback-act"},"2016-04-17", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-xml-ttyagent-oper-sub1"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub7"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-es-ace-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-qos-ma-bng-cfg"},"2016-04-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-pim-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-mpp-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-ifmib-cfg"},"2015-05-14", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-controller-otu-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ospf-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-installmgr-admin-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-infra-clock-linux-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-es-acl-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-telnet-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-oper-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-Ethernet-SPAN-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub7"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-entitymib-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-mpp-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-oper"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-procmem-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-telemetry-model-driven-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-qos-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rsi-oper-sub2"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-syslog-act"},"2016-04-17", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-autorp-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pmengine-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-filesystems-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-entstatemib-cfg"},"2015-07-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-mka-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asic-errors-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-arp-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-drivers-media-eth-oper"},"2015-10-14", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-cdp-oper"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ma-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-alarm-logger-datatypes"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lib-keychain-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-macsec-ctrlr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub8"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-ma-subscriber-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-alarmgr-server-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-clns-isis-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-objmgr-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-spirit-install-instmgr-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-syslog-oper-sub1"},"2016-06-24", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-bgp-cfg"},"2015-08-27", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-es-acl-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-spirit-corehelper-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-acl-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wdsysmon-fd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-invmgr-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-syslog-oper"},"2016-06-24", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-shellutil-filesystem-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-linux-os-reboot-history-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-infra-locale-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rsi-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-plat-chas-invmgr-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ha-eem-policy-oper"},"2016-02-05", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-lldp-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-envmon-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-nto-misc-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fib-common-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-sdr-invmgr-diag-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-ems-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-lpts-punt-flowtrap-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-pl-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-ma-oper"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-hw-resources-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-locald-admin-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rsvp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-envmon-admin-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2vpn-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-netflow-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-acl-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asic-errors-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-static-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rsvp-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ncs5500-coherent-node-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-man-ems-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-infra-cfg"},"2016-06-16", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-port-mapper-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-vrrp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-pfilter-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-oam-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-io-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-skp-qos-oper-sub1"},"2016-02-18", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-sc-envmon-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-hsrp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-tacacs-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-atm-vcm-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2vpn-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-sam-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-sdr-invmgr-diag-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-common-acl-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-ciscosensormib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-pbr-vservice-mgr-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-nd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-config-mibs-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-io-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-controller-optics-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-systemmib-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-icpe-infra-oper-sub6"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-dnx-driver-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-clns-isis-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-lsd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-oper-sub4"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2-eth-infra-datatypes"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fia-internal-tcam-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-iarm-v6-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-snmp-agent-oper-sub1"},"2016-06-01", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-plat-chas-invmgr-oper"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-te-oper-sub4"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ethernet-cfm-sat-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-io-oper"},"2015-10-20", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-tty-server-oper-sub2"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-qos-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-vpn-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rsvp-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-netflow-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-prm-server-oper-sub1"},"2016-02-22", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-l2-eth-infra-oper-sub2"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-alarm-logger-oper-sub1"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-upgrade-fpd-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-fretta-bcm-dpa-resources-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-igmp-dyn-tmpl-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-patch-panel-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-openconfig-optical-client-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-tc-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rsi-subscriber-cfg"},"2015-07-30", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-arp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-rib-ipv6-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asic-errors-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-ntp-admin-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-optics-driver-cfg"},"2016-03-21", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-telemetry-model-driven-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-rcmd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-controller-otu-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-lsd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-dumper-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-aaa-protocol-radius-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ip-sbfd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-infra-tc-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-manageability-perfmgmt-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-sam-cfg"},"2015-01-07", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-smiap-cfg"},"2016-07-04", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-wdsysmon-fd-oper-sub1"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-np-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-crypto-macsec-mka-if-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv6-nd-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-mpls-ldp-oper"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-ipv4-hsrp-cfg"},"2015-11-09", {}, {}});
    ydk_global_capabilities.push_back(path::Capability{std::string{"Cisco-IOS-XR-asr9k-lpts-oper-sub1"},"2015-11-09", {}, {}});
}

}
